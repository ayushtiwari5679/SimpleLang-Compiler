#include<stdio.h>
#include "ast.h"
void gen(Node* n){
    printf("LDI A,%d\n",n->r->v);
    printf("STA %02X\n",x10+(n->na-'a');)
}