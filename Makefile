# Compiler & Flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2  # Strict warnings, optimized
TARGET = program  # Default output file

# Detect all C source files
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

# Default target: Compile and run
all: $(TARGET)

# Build executable from object files
$(TARGET): $(OBJS)
	@echo "🔨 Building: $(TARGET)"
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	@echo "✅ Build complete!"

# Compile each .c file separately
%.o: %.c
	@echo "📄 Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@

# Run the program
run: all
	@echo "🚀 Running: $(TARGET)"
	./$(TARGET)

# Clean compiled files
clean:
	@echo "🧹 Cleaning up..."
	rm -f $(OBJS) $(TARGET)
	@echo "🗑️ Clean complete!"

# Force rebuild
rebuild: clean all

# Display Makefile commands
help:
	@echo "🛠️ Makefile Commands:"
	@echo "  make        - Compile only"
	@echo "  make run    - Compile & run"
	@echo "  make clean  - Remove compiled files"
	@echo "  make rebuild - Clean & rebuild"
