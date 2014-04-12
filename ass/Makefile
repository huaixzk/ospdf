all: test01 test02
test01: test01.c libexchange01.a
	gcc -m32  test01.c -L. -lexchange01 -o test01
libexchange01.a: exchange.c
	gcc -m32 -c exchange.c -o exchange01.o
	ar -rv libexchange01.a exchange01.o

test02: test01.c libexchange02.so
	gcc -m32 test01.c -L. -lexchange02 -o test02
libexchange02.so: exchange.c
	gcc -m32 -shared -fPIC exchange.c -o  libexchange02.so

clean :
	rm -rf *.o  test01 test02 *.a *.so
