#include <bits/stdc++.h>
using namespace std;
struct ArrayImplementaion
{
    int *arr;
    int cap;
    int top;
    ArrayImplementaion(int c)
    {
        cap = c;
        top = -1;
        arr = new int[cap];
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack is already filled full.";
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty.";
        }

        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        if (top == -1)
        {
            cout<<"No element is in the stack!";
        }
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    ArrayImplementaion s(5);
    s.peek();
    cout<<endl;
    s.push(45);
    s.push(90);
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
}