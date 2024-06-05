#include <iostream>
#include "Tree.cpp"
using namespace std;

int main()
{
    Tree t;
    t.root = t.New(7);
    t.root->lf = t.New(2);
    t.root->lf->lf = t.New(1);
    t.root->lf->rt = t.New(5);
    t.root->rt = t.New(9);
    t.root->rt->rt = t.New(14);

    cout << "Given binary tree is" << (t.IsBSTree(t.root)? "" : " not") << " a BST\n";
}
