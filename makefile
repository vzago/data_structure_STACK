main: main.c pilha.c pilha.h
	gcc -o main main.c pilha.c

clean:
	rm -rf main

exec:
	gcc -o main main.c pilha.c
	./main
run :
	./main