#include <iostream>
using namespace std;

struct node {
    char data;
    bool leftthread, rightthread;
    node* left;
    node* right;
};

node* root = nullptr; // Initialize the root node

node* currentnode = nullptr; // Initialize the current node

char InorderSucc() {
    node* temp = currentnode->right;
    if (!currentnode->rightthread) {
        while (!temp->leftthread) {
            temp = temp->left;
        }
    }

    currentnode = temp;
    if (currentnode == root) {
        return 0;
    }
    else {
        return currentnode->data;
    }
}

void inorder() {
    for (char ch = InorderSucc(); ch; ch = InorderSucc()) {
        std::cout << ch;
    }
}

void InsertRight(node* s, node* r) {
    r->right = s->right;
    r->rightthread = s->rightthread;
    r->left = s;
    r->leftthread = true;
    s->right = r;
    s->rightthread = false;
    if (!r->rightthread) {
        node* temp = r->right;
        while (!temp->leftthread) {
            temp = temp->left;
        }
        temp->left = r;
    }
}

void InsertLeft(node* s, node* l) {
    l->left = s->left;
    l->leftthread = s->leftthread;
    l->right = s;
    l->rightthread = true;
    s->left = l;
    s->leftthread = false;
    if (!l->leftthread) {
        node* temp = l->left;
        while (!temp->rightthread) {
            temp = temp->right;
        }
        temp->right = l;
    }
}

int main() {
    // Create a sample threaded binary tree
    node* nodeA = new node{ 'A', false, false, nullptr, nullptr };
    root = nodeA;
    currentnode = nodeA;

    node* nodeB = new node{ 'B', false, false, nullptr, nullptr };
    InsertLeft(nodeA, nodeB);

    node* nodeC = new node{ 'C', false, false, nullptr, nullptr };
    InsertRight(nodeA, nodeC);

    node* nodeD = new node{ 'D', false, false, nullptr, nullptr };
    InsertLeft(nodeB, nodeD);

    node* nodeE = new node{ 'E', false, false, nullptr, nullptr };
    InsertRight(nodeB, nodeE);

    std::cout << "Inorder Traversal: ";
    inorder();
    std::cout << std::endl;

    // Clean up memory (free allocated nodes)
    delete nodeA;
    delete nodeB;
    delete nodeC;
    delete nodeD;
    delete nodeE;

    return 0;
}
