#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int start_stack (STACK *P) {

    P->top = NULL;
    P->count = 0;

    return SUCESS;

}

int empty(STACK *P) {

	if (P->top== NULL) {
		return 1;
    } else {
	return 0;
    }

}

int push (int e, STACK *P) { //first position
    
    NODE *ptr = (NODE*) malloc(sizeof(NODE));
    if (ptr == NULL){
        printf("Error ! Stack is full");

        return FULL;

    } else {
    
        ptr->element = e;
        ptr->prox = P->top;
        P->top = ptr;
        P->count++;

        return SUCESS;
    }
 
}

int pop (STACK *P) {
    
    if(empty(P)) {
        printf("Stack is empty !");
    
        return NOT_EXIST;
    
    } else {
    NODE *ptr = P->top;
    int e = ptr->element;
    
    P->top = ptr->prox; //same as P->top->prox.
    ptr->prox = NULL;
    
    free(ptr);

    P->count--;

    return e;
    }
}

int print_stack (STACK *P) {
    
    NODE *ptr = P->top;
    if(empty(P)) {
        printf("Stack is empty !");
    
        return NOT_EXIST;
    
    } else {
        printf("TOPO \n");
        
        while(ptr!=NULL){
            printf("%d\n",ptr->element);
            ptr = ptr->prox;
        }
    }
}

void clear_Stack(STACK *P){
    NODE *ptr = P->top;
    if(ptr == NULL){
        return;
    }
    while(ptr != NULL){
        NODE *temp = ptr;
        ptr = ptr->prox;
        free(temp);
    }
    P->top = NULL;
}