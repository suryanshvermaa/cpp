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

class LinkedList{
public:
   Node* head;
   Node* tail;
   int size;
   LinkedList(){
    head=tail=NULL;
    size=0;
   }
void insertAtEnd(int val){
    Node* temp=new Node(val);
    if(size==0){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}

};
int main(){
       
}