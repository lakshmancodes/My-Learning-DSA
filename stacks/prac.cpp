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

struct stackNode {
  int data;
  stackNode * next;
  int size;
  stackNode(int d) {
    data = d;
    next = NULL;
  }
};
struct stack {
  stackNode * top;
  int size;
  stack() {
    top = NULL;
    size = 0;
  }
  void stackPush(int x) {
    stackNode * element = new stackNode(x);
    element -> next = top;
    top = element;
    cout << "Element pushed" << "\n";
    size++;
  }
  int stackPop() {
    if (top == NULL) {
      return -1;
    }
    int topData = top -> data;
    stackNode * temp = top;
    top = top -> next;
    delete temp;
    size--;
    return topData;
  }
  int stackSize() {
    return size;
  }
  bool stackIsEmpty() {
    return top == NULL;
  }
  int stackPeek() {
    if (top == NULL) return -1;
    return top -> data;
  }
  void printStack() {
    stackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
  }
};
int main() {
  stack s;
  s.stackPush(10);
  s.stackPush(20);
  s.stackPush(30);
  s.stackPush(40);
  cout << "Element popped: " << s.stackPop() << "\n";
  cout << "Stack size: " << s.stackSize() << "\n";
  cout <<"Stack empty or not? "<<s.stackIsEmpty()<<"\n";
  cout << "stack's top element: " << s.stackPeek() << "\n";
  return 0;
}

#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
  int size;
  Node(int d)
  {
    data=d;
    next=nullptr;
  }
};
struct stack
{
  int size;
  Node *top;
  stack()
  {
    top=NULL;
    size=0;
  }


  void Push(int data)
  {
    Node *new_node= new Node(data);
    new_node->next=top;
  }
};
struct Node
{
  int data;
  Node *next;
  int size;

  Node(int new_data)
  {
    data = new_data;
    next = NULL;
  }
  Node(int new_data, Node *next1)
  {
    next = next1;
    data = new_data;
  }
};
struct stack
{
  Node *top;
  int size;
  stack()
  {
    size = 0;
    top = NULL;
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
    // if (isEmpty())
    // {
    //   return -1;
    // }
    int popped_value = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    size--;
    return popped_value;
  }
  int Size()
  {
    return size;
  }
  int Top()
  {
    if(top==NULL)
    {
      return -1;
    }
    return top->data;
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

class stack
{
  int size;
  int top;
  int *arr;
public:
  stack()
  {
    size=10;
    top=-1;
    arr= new int[size];
  }
  void Push(int data)
  {
    top++;
    arr[top]=data;
  }
  int Pop()
  {
    int ele=arr[top];
    top--;
    return ele;
  }
  int Top()
  {
    return arr[top];
  }
  int Size()
  {
    return top+1;
  }
};
int main()
{
   stack s;
    s.Push(1);
    s.Push(10);
    s.Push(1000);
    s.Push(10000);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Top()<<endl;
}

#include<iostream>
using namespace std;
class stack
{
  int top;
  int size;
  int *arr;
public:
  stack()
  {
    size=10;
    arr= new int[size];
    top=-1;
  }
  void Push(int data)
  {
     top++;
     arr[top]=data;
  }
  int Pop()
  {
    int ele=arr[top];
    top--;
    return ele;
  }
  int Top()
  {
    return arr[top];
  }
  int Size()
  {
    return top+1;
  }
};
int main()
{

  stack s;
    s.Push(1);
    s.Push(10);
    s.Push(1000);
    s.Push(10000);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Top()<<endl;
}*/

// stack operations using linkedlist
#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = nullptr;
  }
  Node(int val, Node *next1)
  {
    data = val;
    next = next1;
  }
};

Node *head;
Node *top;
struct stack
{
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
    if (top == NULL)
    {
      return -1;
    }
    else
    {
      int ele = top->data;
      Node *temp = top;
      top = top->next;
      delete temp;
      size--;
      return ele;
      
    }
  }
  int Top()
  {
    return top->data;
  }
  int Size()
  {
    return size;
  }
};
int main()
{
  stack s;
  s.Push(1);
  s.Push(10);
  s.Push(1000);
  s.Push(10000);
  cout << s.Top() << endl;
  cout << s.Size() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  cout << s.Top() << endl;
  cout << s.Size() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  cout << s.Pop() << endl;
  cout << s.Size() << endl;
  cout << s.Pop() << endl;
}