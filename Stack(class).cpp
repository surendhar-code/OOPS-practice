#include<iostream>
#include<iomanip>
#define MAX 30
using namespace std;

class Stack
{
private:
    int top;
    int value;
    int stack[MAX];

public:

    Stack()
    {
        top= -1;
    }
    void push()
    {
        if(top==(MAX-1))
            cout<<"Stack overflow\n";
        else
        {
            cout<<"Enter the element to be inserted \n";
            cin>>value;
            top++;
            stack[top]=value;

        }
    }

    void pop()
    {
        if(top==-1)
            cout<<"The stack is empty-underflow\n";
        else{

            cout<<"The deleted element is : "<<stack[top]<<endl;
            top--;

        }
    }

    void print()
    {

        display();
    }

protected:
    void display()
    {
        for(int i=0;i<=top;i++)
            cout<<"value : "<<stack[i]<<endl;
    }



};

int main()
{
    Stack obj;
    obj.push();
    obj.push();
    obj.push();
    obj.pop();
    obj.print();
    return 0;
}
