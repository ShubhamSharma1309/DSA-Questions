#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(){
    cout<<"enter the value";
    int data;
    cin>>data;

    if(data == -1) {
        return NULL;
    }

    Node* root = new root(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

int main(){
Node* root =createTree();
cout<<root->data<<endl;
return 0;
}