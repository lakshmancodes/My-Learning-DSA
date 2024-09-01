#include<iostream>
using namespace std;
// Node* head;
// Node* temp;

class Node
{   
public: 
    
    int data;
    Node* next;
    Node(int data1 )
    {
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
};
Node* head;
Node* temp;
void add(int new_data)
{
    Node* new_node = new Node(new_data);
    if(head==NULL)
    {
        head=new_node;
        temp=new_node;
    }
    temp->next=new_node;
    temp=temp->next;
}
void display()
{
    if(head==NULL)
    {
        cout<<"the linked list is empty"<<endl;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void reversei()
{
    Node* prev=NULL;
    Node* front;
    temp=head;
    while(temp!=NULL)
    {
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
}
int main()
{
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);
    display();
    cout<<endl;
    reversei();
    display();
    cout<<endl;
}