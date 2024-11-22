#include<iostream>
using namespace std;
class Node{ //linkedList Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);

}
int size(Node* head){
   Node* temp=head;
   int n=0;
    while(temp!=NULL){
        temp=temp->next;
         n++;
    }
    return n;
}
int main(){
    // 10 20 30 40
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);

    //forming ll
    a->next=b;
    b->next=c;
    c->next=d;
    //printing linkedlist
//    display(a);
//    cout<<size(a);
displayRec(a);
    
}