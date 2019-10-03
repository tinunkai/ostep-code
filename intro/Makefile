TARGET:=target
all: main

init:
	mkdir -p target

clean:
	rm -rf target/*

cpu: cpu.c common.h
	gcc -o $(TARGET)/cpu cpu.c -Wall

mem: mem.c common.h
	gcc -o $(TARGET)/mem mem.c -Wall

threads: threads.c common.h common_threads.h
	gcc -o $(TARGET)/threads threads.c -Wall -pthread

io: io.c common.h
	gcc -o $(TARGET)/io io.c -Wall

main: cpu mem threads io
	./target/io
