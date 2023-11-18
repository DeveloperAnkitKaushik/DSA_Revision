#include <iostream>
 
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* bst(Node* root,int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root->right = bst(root->right,d);
    }else{
        root->left = bst(root->left,d);
    }
    return root;
}

void insert(Node* &root){
    int data;
    cin >> data;
    while(data!=-1){
        root = bst(root,data);
        cin >> data;
    }
}

void display(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << "  ";
    if(root->left) display(root->left);
    if(root->right) display(root->right);
}

int main(){
    Node* root = NULL;
    cout << "Enter data to be insert: " << endl;
    insert(root);
    display(root);
}