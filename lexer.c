#include<stdio.h>
#include "ast.h"

extern char t;
extern int n;
extern void next();

Node* n=new_node(NodeType t){
    Node* n=calloc(1,sizeof(Node));
    n->type=t;
    return n;
}

Node* parse(){
    Node* n=new_node(ASSIGN);
    n->name=t;
    next();
    next();
    n->r=new_node(NUM);
    n->r->val=num;
    next();
    return n;
}