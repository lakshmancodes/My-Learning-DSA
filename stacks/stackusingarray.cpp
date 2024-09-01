/*#include <iostream>
using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;

public:
    Stack()
    {
        top = -1;
        size = 100;
        arr = new int[size];
    }
    void Push(int data)
    {
        top++;
        arr[top] = data;
    }
    int Pop()
    {
        int data= arr[top];
        top--;
        return data;
    }
    int Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top + 1;
    }
};
int main()
{
    Stack s;
    s.Push(1);
    s.Push(10);
    s.Push(1000);
    s.Push(10000);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Top();
}


#include<iostream>
using namespace std;
class Stack
{
    int size;
    int * arr;
    int top;
public:
    Stack()
    {
        size=100;
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
    int Size()
    {
        return top+1;
    }
    int Top()
    {
        return arr[top];
    }

};

int main()
{
    Stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);
    cout<<s.Size()<<endl;
    cout<<"The element on the top "<< s.Top()<<endl;
    cout<<"The element that will be popped "<<s.Pop()<<endl;
    cout<<"Size of the stack after popping "<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    int a=s.Pop();//6th time pop
    if(a==0)
    {
        cout<<"the stack is empty"<<endl;
    }
}

#include <iostream>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;
public:
    Stack()
    {
        top=-1;
        size=10;
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
    int Size()
    {
        return top+1;
    }
    int Top()
    {
        return arr[top];
    }
};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    cout<<s.Size()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    return 0;
}*
#include <iostream>
using namespace std;
class Stack
{
    int size;
    int top;
    int *arr;
public :
    Stack()
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
        int ele= arr[top];
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
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    cout<<s.Top()<<endl;
    cout<<s.Pop()<<endl;
    s.Push(1000);
    cout<<s.Top()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    int a=s.Pop();
    if(a==0)
    {
        cout<<"the stack is empty"<<endl;
    }
}
#include <iostream>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack()
    {
        size = 5;
        arr = new int[size];
        top = -1;
    }
    void Push(int data)
    {
        top++;
        arr[top] = data;
    }
    int Pop()
    {
        int ele = arr[top];
        top--;
        return ele;
    }
    int Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top + 1;
    }
};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    cout << s.Top() << endl;
    s.Pop();
    s.Pop();
    cout<<s.Top()<<endl;
    s.Pop();
    cout << s.Top() << endl;
}

#include<iostream>
#include<vector>
using namespace std;
class Stack
{
    int size;
    int top;
    int *arr;
public:
    Stack()
    {
        size=5;
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
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    cout << s.Top() << endl;
    s.Pop();
    s.Pop();
    cout<<s.Top()<<endl;
    s.Pop();
    cout << s.Top() << endl;
}


#include<iostream>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;
    //int count;
public:
    Stack()
    {
        size=4;
        arr=new int[size];
        top=-1;
        //count=0;
    }
    void Push(int data)
    {
        top++;
        arr[top]=data;
        //count++;
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
    // void printall()
    // {
    //     while(!.empty())

    // }
};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    cout<<s.Pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    s.Push(100);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    //s.printall();
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
// stack using linked list

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
};
struct stack
{
    int size;
    Node *top;
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
        int ele = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
        return ele;
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
}*/

// stack using array
#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int size;
    int *arr;
    Stack()
    {
        top = -1;
        size = 10;
        arr = new int(size);
    }
    void Push(int data)
    {
        top++;
        arr[top] = data;
    }
    int Pop()
    {
        int ele = arr[top];
        top--;
        return ele;
    }
    int Size()
    {
        return top + 1;
    }
    int Top()
    {
        return arr[top];
    }
};

int main()
{
    Stack s;
    s.Push(1);
    s.Push(10);
    s.Push(1000);
    s.Push(10000);
    cout << s.Top() << endl;
    cout << s.Size() << endl;
    cout << s.Pop() << endl;
    cout << s.Size() << endl;
    cout << s.Top() << endl;
}