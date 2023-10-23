#include <stdio.h>
#include "pilha.h"
#include <stdlib.h>


int main() {

	STACK P1;
	int e;

	start_stack(&P1);

	push(5, &P1);
	push(7, &P1);
	push(9, &P1);
	push(12, &P1);
	push(15, &P1);

    print_stack(&P1);

	pop(&P1);
    
    print_stack(&P1);
	clear_Stack(&P1);

}