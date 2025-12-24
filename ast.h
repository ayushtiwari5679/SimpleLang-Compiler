typedef enum{ASSIGN, IF, NUM, ID}NodeType;
typedef struct Node{
    NodeType t;
    char na;
    int v;
    struct Node *l,*r,*next;
}Node;
Node *new_node(NodeType t);