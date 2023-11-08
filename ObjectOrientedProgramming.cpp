#include <iostream>
#include <queue>
 
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;
}

void travesal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << "  ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* ak = NULL;
    ak = buildTree(ak);
    // 10 9 11 17 -1 -1 -1 15 -1 -1 6 18 -1 -1 -1

    travesal(ak);
}