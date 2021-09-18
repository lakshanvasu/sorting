#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q;
        q=q1;
        q1=q2;
        q2=q;
    }
    void pop()
    {
        q1.pop();
    }
    int top()
    {
        if(q1.empty())
         return -1;
        return q1.front();
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.top();
    return 0;
}
