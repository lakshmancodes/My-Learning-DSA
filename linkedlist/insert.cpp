/*#include<iostream>
using namespace std;

class Node
{
    
public:
    int value;
    Node *next;
    Node(int data)
    {
        value=data;
        next=NULL;
    }
    Node(int data,Node* next1)
    {
        value=data;
        next=next1;
    }
};
Node *head;
Node *current;
void Push(int new_data)
{
    Node *new_node= new Node(new_data);
    if(head==NULL)
    {
        head=new_node;
        current=new_node;
    }
    current->next=new_node;
    current=current->next;
}
void printall()
{
    current=head;
    while(current!=NULL)
    {
        cout<<current->value<<"-> ";
        current=current->next;
    }
}
void insertbegin(int new_data)
{
    Node *new_node= new Node(new_data);
    current=head;
    new_node->next=current;
    head=new_node;
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    printall();
    cout<<"\n";
    insertbegin(0);
    printall();
}*/


#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
    Node(int value,Node *next1)
    {
        data=value;
        next=next1;
    }
};
Node *head;
Node *current;
void push(int new_data)
{
    Node *new_node = new Node(new_data);
    if(head==NULL)
    {
        head=new_node;
        current=new_node;
    }
    current->next=new_node;
    current=current->next;
}
void printll()
{
    if(head==NULL)
    {
        cout<<"no elements in the ll"<<endl;
    }
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<"->";
        current=current->next;
    }

}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    cout<<"to display the linked list: "<<endl;
    printll();
}