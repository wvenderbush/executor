GCC = gcc -g

all: exec.c
	$(GCC) exec.c -o prog

clean:
	rm *.o
	rm *~

run: all
	./prog

debug: all
	gdb prog
