#pragma once
#include <iostream>
#include <queue>
#include <vector>

using namespace std;


class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;
};


int max(int a, int b);

// Calculate height
int height(Node* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

// New node creation
Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return (node);
}

// Rotacion derecha
Node* rightRotate(Node* y) {

    cout << "Se hizo rotacion derecha al nodo " << y->key << endl;
    Node* x = y->left;
    cout << "Nodo a la izquierda es " << y->left->key << endl;
    Node* T2 = x->right;
    
    x->right = y; 
    cout << "Nodo " << x->key <<" a la derecha es " << x->right->key << endl;
    y->left = T2;

    if (true)
    {

    }
    //cout << "Nodo y " << y->key << "  es a la iz" << y->left->key << endl;

    y->height = max(height(y->left),
        height(y->right)) +
        1;
    x->height = max(height(x->left),
        height(x->right)) +
        1;

    return x;
}

// Rotacion izquierda
Node* leftRotate(Node* x) {
    cout << "Se hizo rotacion izquierda" << endl;
    Node* y = x->right;
    cout << "Nodo a la derecha es " << x->right->key << endl;
    Node* T2 = y->left;
    y->left = x;

    //cout << "Nodo " << y->key << " a la derecha es " << x->left->key << endl;
    x->right = T2;

    x->height = max(height(x->left),
        height(x->right)) +
        1;

    y->height = max(height(y->left),
        height(y->right)) +
        1;
    return y;
}

// Get the balance factor of each node
int getBalanceFactor(Node* N) {
    if (N == NULL)
        return 0;
    return height(N->left) -
        height(N->right);
}

// Insert a node
Node* insertNode(Node* node, int key) {
    // Find the correct postion and insert the node
    if (node == NULL) {
        return (newNode(key));
        cout << "Creo el nodo " << key << endl;
        }
        if (key < node->key) {
            cout << "Se envio el nodo " << key << " a la izquierda de " << node->key << endl;
            node->left = insertNode(node->left, key);
        }

        else if (key > node->key) {
            cout << "Se envio el nodo " << key << " a la derecha de " << node->key << endl;
            node->right = insertNode(node->right, key);
        }
        else
        return node;

    // Update the balance factor of each node and
    // balance the tree

    node->height = 1 + max(height(node->left),
        height(node->right));

    //cout << "Altura del nodo " << node->key << " es " << node->height << endl;

    int balanceFactor = getBalanceFactor(node);

    cout << "FE del nodo " << node->key << " es " << balanceFactor << endl;

    if (balanceFactor > 1) {
        if (key < node->left->key) {
            return rightRotate(node);
        }

        else if (key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    
    if (balanceFactor < -1) {
        if (key > node->right->key) {
            return leftRotate(node);
        }
        else if (key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }
    
    return node;
}

// Node with minimum value
Node* nodeWithMimumValue(Node* node) {
    Node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

// Delete a node
Node* deleteNode(Node* root, int key) {
    // Find the node and delete it
    if (root == nullptr)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if ((root->left == NULL) ||
            (root->right == NULL)) {
            Node* temp = root->left ? root->left : root->right;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
            else
                *root = *temp;
            free(temp);
        }
        else {
            Node* temp = nodeWithMimumValue(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right,
                temp->key);
        }
    }

    if (root == NULL)
        return root;

    // Update the balance factor of each node and
    // balance the tree
    root->height = 1 + max(height(root->left),
        height(root->right));
    int balanceFactor = getBalanceFactor(root);
    if (balanceFactor > 1) {
        if (getBalanceFactor(root->left) >= 0) {
            return rightRotate(root);
        }
        else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }
    if (balanceFactor < -1) {
        if (getBalanceFactor(root->right) <= 0) {
            return leftRotate(root);
        }
        else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }
    return root;
}

void preOrden(Node* root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrden(root->left);
        preOrden(root->right);
    }
}

void enOrden(Node* root)
{
    if (root != NULL)
    {
        enOrden(root->left);
        cout << root->key << " ";
        enOrden(root->right);
    }
}

void postOrden(Node* root)
{
    if (root != NULL)
    {
        postOrden(root->left);
        postOrden(root->right);
        cout << root->key << " ";
    }
}


void printTree(Node* root, string indent, bool last) {
    if (root != nullptr) {
        cout << indent;
        if (last) {
            cout << "R----";
            indent += "   ";
        }
        else {
            cout << "L----";
            indent += "|  ";
        }
        cout << root->key << " FE: " << getBalanceFactor(root) << endl;
        printTree(root->left, indent, false);
        printTree(root->right, indent, true);
    }
}

