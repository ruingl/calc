CC = gcc
CFLAGS = -Wall -Wextra

SRC = src/main.c
OBJ = build/main.o
OUT = build/calc

build: $(SRC)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

start: $(OUT)
	$(OUT)

clean:
	rm -rf build