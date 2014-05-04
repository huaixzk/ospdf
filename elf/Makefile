all: test fork forkprob0
test: hello.o
	ld hello.o -o test
hello.o: hello.s
	as  hello.s -o hello.o
fork:fork.c
forkprob0:forkprob0.c 
clean:
	rm -rf test hello.o fork forkprob0 
