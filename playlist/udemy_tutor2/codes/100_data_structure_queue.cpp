#include <iostream>
using namespace std;

#define SIZE 10

class queue
{
    int a[SIZE];
    int rear;
    int front;

public:
    queue()
    {
        rear = front = -1;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x)
{
    if (front == -1)
        front++;
    if (rear == SIZE - 1)
        cout << "queue is full" << endl;
    else
        a[++rear] = x;
}

int queue::dequeue()
{
    return a[++front];
}

void queue::display()
{
    for (int i = front; i < rear; i++)
        cout << a[i] << endl;
}

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(1000);
    q.enqueue(1001);
    q.enqueue(1002);
    q.dequeue();
    q.enqueue(1003);
    q.dequeue();
    q.dequeue();
    q.enqueue(1004);

    q.display();

    return 0;
}