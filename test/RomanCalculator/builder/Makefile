CC	:= gcc
CPPFLAGS :=
CXXFLAGS := -Wall -g -Wextra


HEADER_DIR := ..
SOURCE_DIR := 
TEST_SOURCE_DIR := ../source
COTS_DIR := ../../../cots
BIN_DIR := ../bin

INCLUDE := -I$(TEST_SOURCE_DIR) \
	-I$(COTS_DIR)/builder/src

SOURCE_FILES :=

TEST_FILES := $(SOURCE_DIR)/test_runner.c \
	$(SOURCE_DIR)/addition_test.c

SOURCE_OBJ_DIR := $(BIN_DIR)/obj #TODO
SOURCE_OBJ_FILES := $(addprefix $(SOURCE_OBJ_DIR)/,$(notdir $(SOURCE_FILES:.c=.o)))

TEST_OBJ_DIR := $(BIN_DIR)/obj
TEST_OBJ_FILES := $(addprefix $(TEST_OBJ_DIR)/,$(notdir $(TEST_FILES:.c=.o)))


LIBS := -L$(COTS_DIR)/check-0.10.0/src/.libs -lcheck \
	-L$(COTS_DIR)/check-0.10.0/lib/.libs -lcompat

TARGET_DIR := $(BIN_DIR)
TARGET := $(BIN_DIR)/TestRunner


####### RULES ########

all : $(TARGET)

$(TARGET): $(TEST_OBJ_FILES)
		$(CC) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) $(TEST_OBJ_FILES) $(LIBS) -o $@

$(TEST_OBJ_DIR)/%.o: $(TEST_SOURCE_DIR)/%.c
		$(CC) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDES)-c $< -o $@

clean:
	rm -rf $(TARGET) $(TEST_OBJ_DIR)

.PHONY: all
$(shell mkdir -p $(TEST_OBJ_DIR))
$(shell mkdir -p $(TARGET_DIR))



