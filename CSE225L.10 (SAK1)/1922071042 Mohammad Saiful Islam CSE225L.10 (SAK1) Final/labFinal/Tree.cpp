#include <iostream>
#include "Tree.h"
using namespace std;

Node* Tree :: New(int v)
{
    Node *tmp = new Node();
    tmp->v = v;
    tmp->rt = NULL;
    tmp->lf = NULL;
    return tmp;
}
bool Tree::IsBSTree(Node* root)
{
    static Node *prev = NULL;
    if (root)
    {
        if (!IsBSTree(root->lf)) return 0;
        if (prev != NULL && root->v <= prev->v) return 0;
        prev = root;
        return IsBSTree(root->rt);
    }
    return 1;
}
