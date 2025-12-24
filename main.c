#include "ast.h"
void init(char*);
Node* parse();
void gen(Node*);

int main(int c,char**v){
    init(v[1]);
    Node* n=parse();
    gen(n);
    printf("HLT\n");
}