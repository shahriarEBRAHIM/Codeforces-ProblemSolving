# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror -O2

# Directories
SRC_DIR := .
BUILD_DIR := build

# Find all C source files in SRC_DIR and its subdirectories
SRCS := $(shell find $(SRC_DIR) -type f -name "*.c")
# Map source files to corresponding executables in the BUILD_DIR
EXES := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SRCS))

# Default target: build all executables
all: $(EXES)

# Rule to compile source files to executables
$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@
	chmod +x $@

.PHONY: all clean

# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR)