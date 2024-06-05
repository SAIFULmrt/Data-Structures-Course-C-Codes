#ifndef TREE_H
#define TREE_H

struct Node
{
    int v;
    Node *lf;
    Node *rt;
};
class Tree
{
public:
    Node *root = NULL;
    Node *New(int v);
    bool IsBSTree(Node* root);
};
#endif
