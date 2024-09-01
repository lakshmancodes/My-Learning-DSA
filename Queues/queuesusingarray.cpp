// queues follow the principle of FIFO first in first out
/*#include <iostream>
using namespace std;

class Queue
{
    int size;
    // int top;
    int *arr;
    int front;
    int rear;
    int count;

public:
    Queue()
    {
        size = 5;
        // top=-1;
        front = 0;
        rear = 0;
        count = 0;
        arr = new int[size];
    }
    void Push(int data)
    {
        if (count < size)
        {
            arr[rear % size] = data;
            count++;
            rear++;
        }
        else
        {
            cout << "Queue is full " << endl;
            cout << "Can't insert " << data << endl;
        }
    }
    int Pop()
    {
        if (count == 0)
        {
            return -1;
        }
        int ele = arr[front];
        front++;
        count--;
        return ele;
    }
    int Size()
    {
        return count;
    }
    int top()
    {
        if (count == 0)
        {
            return -1;
        }
        return arr[front%size];

    }

};

int main()
{
    Queue a;
    a.Push(10);
    a.Push(20);
    a.Push(30);
    a.Push(40);
    a.Push(50);
    cout<<a.top()<<endl;
    cout << a.Pop() << endl;
    cout<<a.Size()<<endl;

    a.Push(100);
    cout<<a.Size()<<endl;
    cout<<a.top()<<endl;
}
#include <iostream>
using namespace std;

class Queue
{
    int size;
    int *arr;
    int front;
    int rear;
    int count;

public:
    Queue()
    {
        size = 5;
        front = 0;
        rear = 0;
        count = 0;
        arr = new int[size];
    }
    void Push(int data)
    {
        if (count < size)
        {
            arr[rear % size] = data;
            count++;
            rear++;
        }
        else
        {
            cout << "Queue is full " << endl;
            cout << "Can't insert " << data << endl;
        }
    }
    int Pop()
    {
        if (count == 0)
        {
            return -1;
        }
        int ele = arr[front];
        front++;
        count--;
        return ele;
    }
    int Size()
    {
        return count;
    }
    int top()
    {
        if (count == 0)
        {
            return -1;
        }
        //return arr[(front % size)-1]; // Return the element at the front of the queue
        //return arr[front];
        return arr[(rear-1)%size];
    }
};

int main()
{
    Queue a;
    a.Push(10);
    a.Push(20);
    a.Push(30);
    a.Push(40);
    a.Push(50);
    cout << a.top() << endl;
    cout << a.Pop() << endl;
    cout << a.Size() << endl;

    a.Push(100);
    cout << a.Size() << endl;
    cout << a.top() << endl;

    return 0;
}

#include<iostream>
using namespace std;
class Queue
{
    int size;
    int front;
    int rear;
    int *arr;
    int count;
public:
    Queue()
    {
        size=5;
        front=0;
        rear=0;
        count=0;
        arr= new int[size];
    }
    void Push(int data)
    {
        if(count<size)
        {
            arr[rear %size]=data;
            rear++;
            count++;
        }
        else
        {
            cout<<"the queue is full "<< "can't push "<<data<<endl;
        }
    }
    int Pop()
    {
        int ele= arr[front];
        count--;
        front ++;
        return ele;
    }

    int Size()
    {
        return count;
    }
    int Top()
    {
        return arr[(rear-1)%size];
    }
    
};


int main()
{
   Queue a;
    a.Push(10);
    a.Push(20);
    a.Push(30);
    a.Push(40);
    a.Push(50);
    cout << a.Top() << endl;
    cout << a.Pop() << endl;
    cout << a.Size() << endl;

    a.Push(100);
    cout << a.Size() << endl;
    cout << a.Top() << endl;
}
#include <iostream>
using namespace std;
class Queue
{
    int size;
    int top;
    int *arr;

public:
    Queue()
    {
        size = 5;
        top = -1;
        arr = new int[size];
    }
};

int main()
{
    Queue q;
}


//IMPLEMENT QUEUE operation using array 

#include<iostream>
using namespace std;
class Queue
{
    int front;
    int rear;
    int size;
    int *arr;
    int count;
public:
    Queue()
    {
        count=0;
        size=5;
        arr= new int[size];
        rear=0;
        front=0;
    }
    void Push(int data)
    {
        if(count<size)
        {
            arr[rear%size]=data;
            rear++;
            count++;
        }
        else
        {
            cout<<"the queue is full !"<<endl;
        }
    }
    int Pop()
    {
        int ele=arr[front];
        front++;
        count--;
        return ele;
    }

    int Top()
    {
        return arr[front];
    }
    int Size()
    {
        return count;
    }
    void printall()
    {
        for(int i=front;i<rear;i++)
        {
            cout<<arr[i %size]<<" ";
        }
    }
};
int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    cout << q.Top() << endl;
    cout << q.Pop() << endl;
    cout << q.Size() << endl;

    q.Push(100);
    cout << q.Size() << endl;
    cout << q.Top() << endl;
    q.printall();
    return 0;
    
}*/
//queues using array
#include<iostream>
using namespace std;
class Queue
{

    int front;
    int rear;
    int size;
    int count;
    int *arr;
public:
    Queue()
    {
        front =0;
        rear=0;
        count=0;
        size=5;
        arr= new int[size];
    }

    void Push(int data)
    {
        if(count<size)
        {
            arr[rear%size]=data;
            count++;
            rear++;
        }
        else
        {
            cout<<"Queue is full"<<endl;
        }
        
    }

    int Pop()
    {
        int ele= arr[front];
        front++;
        count--;
        return ele;
    }
    int Top()
    {
        return arr[front];
    }

    int Size()
    {
        return count;
    }
    void printall()
    {
        for(int i=0;i<count;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    cout << "TOP :"<<q.Top() << endl;
    cout << "POP :"<<q.Pop() << endl;
    cout << "SIZE :" <<q.Size() << endl;

    q.Push(100);
    cout <<"SIZE:"<< q.Size() << endl;
    cout <<"TOP :"<< q.Top() << endl;
    q.printall();
}
