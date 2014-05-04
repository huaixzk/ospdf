test: hello.o
	ld hello.o -o test
hello.o: hello.s
	as  hello.s -o hello.o
clean:
	rm -rf test hello.o
