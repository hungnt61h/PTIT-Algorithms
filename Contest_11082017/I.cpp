#include <iostream>

using namespace std;
  
typedef struct node {
    int key;
    node *left, *right;
} node;

node *newNode(int item) {
    node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(node *root) {
    if (root != NULL) {
    	cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

node* insert(struct node* node, int key) {
    if (node == NULL)
		return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

void test() {
	int n, a;
	cin>>n;
	node *root = NULL;
	cin>>a;
	root = insert(root, a);
	for (int i = 1; i < n; i++) {
		cin>>a;
		insert(root, a);
	}
	inorder(root);
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
    return 0;
}
