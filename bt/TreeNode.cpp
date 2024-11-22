#include<iostream>
#include<limits>
using namespace std;
class Node{  //this is tree node
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int sumOfNodes(Node* root){
    if(root==NULL) return 0;
    return root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
}
int sizeOfBT(Node* root){
     if(root==NULL) return 0;
    return  1 + sizeOfBT(root->left) + sizeOfBT(root->right);
}
int maxVal(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxVal(root->left),maxVal(root->right)));
}
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int levelOfBT(Node* root){
    if(root==NULL) return 0;
    return 1+max(levelOfBT(root->left),levelOfBT(root->right));
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

}