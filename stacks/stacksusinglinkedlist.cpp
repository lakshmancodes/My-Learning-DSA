/*#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
  int size;
  Node(int new_data)
  {
    data = new_data;
    next = nullptr;
  }
  Node(int new_data, Node *next1)
  {
    data = new_data;
    next = next1;
  }
};
struct stack
{
  Node *top;
  int size;
  stack()
  {
    top = NULL;
    size = 0;
  }
  void Push(int new_data)
  {
    Node *new_node = new Node(new_data);
    new_node->next = top;
    top = new_node;
    size++;
  }
  int Pop()
  {
    int pop_ele= top->data;
    Node *temp= top ;
    top=top->next;
    delete temp;
    size--;
    return pop_ele;
  }
  int Top()
  {
    if(top==NULL)
    {
        return -1;
    }
    return top->data;
  }
  int Size()
  {
    return size;
  }
  void pusjj(int new_data)
  {
    Node *new_node= new Node(new_data);
    new_node->next=top;
    top=new_node;
    size++;
  }
  int POPP()
  {
    int pop_ele= top->data;
    Node *temp=top;
    top=top->next;
    delete temp;
    size--;
    return pop_ele;
  }
};
int main()
{
  stack s;
  s.Push(10);
  s.Push(20);
  s.Push(30);
  s.Push(40);
  cout<<s.Pop()<<endl;
  cout<<s.Pop()<<endl;
  cout<<s.Size()<<endl;
  s.Push(400);
  cout<<s.Top()<<endl;
  cout<<s.Size()<<endl;
}
#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};
class Stack
{
public:
  int size;
  Node *top;
  Stack()
  {
    size = 0;
    top = NULL;
  }
  void Push(int data)
  {
    Node *new_node = new Node(data);
    new_node->next=top;
    top=new_node;
    size++;
  }
  int Pop()
  {
    int pop_ele= top->data;
    Node *temp= top;
    top=top->next;
    delete temp;
    size--;
    return pop_ele;
  }
  int Size()
  {
    return size;
  }
  int Top()
  {
    if (size == 0)
    {
      cout << "Stack is empty\n";
      return -1; // or throw an exception
    }
    return top->data;
  }
};

#include <iostream>
using namespace std;
int main()
{
  Stack s;
  s.Push(10);
  s.Push(20);
  s.Push(30);
  s.Push(40);
  cout << s.Pop() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  s.Push(400);
  cout << s.Top() << endl;
  cout << s.Size() << endl;
}*/
#include <iostream>
using namespace std;
class Node
{
public:
  Node *next;
  int data;
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};
class Stack
{
public:
  int size;
  Node *top;
  Stack()
  {
    size = 0;
    top = nullptr;
  }
  void Push(int data)
  {
    Node *new_node = new Node(data);
    new_node->next = top;
    top = new_node;
    size++;
  }
  int Pop()
  {
    int pop_ele = top->data;
    Node *temp = top;
    top = top->next;
    size--;
    delete temp;
    return pop_ele;
  }
  int Size()
  {
    return size;
  }
  int Top()
  {
    return top->data;
  }
};

int main()
{
  Stack s;
  s.Push(10);
  s.Push(20);
  s.Push(30);
  s.Push(40);
  cout << s.Pop() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  s.Push(400);
  cout << s.Top() << endl;
  cout << s.Size() << endl;
}