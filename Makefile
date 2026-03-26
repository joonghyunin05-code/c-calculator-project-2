CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = calculator

SRCS = src/main.c src/add.c src/sub.c src/mul.c src/div.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_TARGET): $(TEST_SRCS)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_SRCS)

clean:
	rm -f src/*.o $(TARGET)