#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct LinkedListImplementation
{
    Node *head;
    int size;

    LinkedListImplementation()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }

    int give_size(){
        return size;
    }

    int peek(){
        if(head==NULL){
            cout<<"Stack is empty!";
        }
        return head->data;
    }

    bool isEmpty(){
        return (head==NULL);
    }
};

int main()
{
    LinkedListImplementation L;
    L.push(5);
    L.push(10);
    L.push(20);
    cout << L.pop() << endl;
    cout << L.give_size() << endl;
    cout << L.peek() << endl;
    cout << L.isEmpty() << endl;
}