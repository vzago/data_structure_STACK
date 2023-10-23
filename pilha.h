#ifndef STACK_H
#define STACK_H

#define SUCESS 1
#define NOT_EXIST -1
#define EXIST -2
#define INVALID -3
#define FULL -4
#define EMPTY -5

//typedef struct NODE *t_apontador;

typedef struct NODE {
    int element;
    struct NODE *prox; //Node type pointer, the same as: typedef struct NODE *t_apontador;
} NODE;

typedef struct STACK {
    NODE *top;
    int count;
} STACK;

int start_stack (STACK *P);
int push (int e, STACK *P );
int pop (STACK *P);
int print_stack (STACK *P);
int empty(STACK *P);
void clear_Stack(STACK *P);


#endif