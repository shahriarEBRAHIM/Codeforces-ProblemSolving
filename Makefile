CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2

SRCS := $(shell find . -type f -name "*.c")
EXES := $(notdir $(SRCS:.c=))

all: $(EXES)

$(EXES): %: %.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: all clean rebuild

clean:
	rm -f $(EXES)

rebuild: clean all