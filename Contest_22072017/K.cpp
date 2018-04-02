#include <iostream>
#include <string>

using namespace std;

int tCount = 0;

struct node {
    string data;
    int count;
    node *left, *right;
};

typedef node * tree;

void ins(tree &root, string x) {
    if (root == NULL) {
        node * p = new node;
        p->data = x;
        p->count = 1;
        p->left = p->right = NULL;
        root = p;
        tCount++;
        return;
    }
    if (root->data == x)
		root->count++;
    else {
        if (root->data < x)
            ins(root->right, x);
        else
            ins(root->left, x);
    }
}

void LNR(tree root) {
    if (root != NULL) {
        LNR(root->left);
        cout<<root->data<<" "<<root->count<<endl;
        LNR(root->right);
    }
}

int main() {
    tCount = 0;
    string str;
    tree T = NULL;
    while (cin>>str)
        ins(T, str);
    cout<<tCount<<endl;
    LNR(T);
}

