TARGET:=target
CC:=gcc
all: main

init:
	mkdir -p target

clean:
	rm -rf target/*

cpu: cpu.c common.h
	$(CC) -o $(TARGET)/cpu cpu.c -Wall

mem: mem.c common.h
	$(CC) -o $(TARGET)/mem mem.c -Wall

threads: threads.c common.h common_threads.h
	$(CC) -o $(TARGET)/threads threads.c -Wall -pthread

io: io.c common.h
	$(CC) -o $(TARGET)/io io.c -Wall

main: cpu mem threads io
	./target/io
