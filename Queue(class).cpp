#include<iostream>
#include<iomanip>

using namespace std;
#define MAX 50
class queue
{
private:
    int item;
    int rear;
    int front;
    int Queue[MAX];

public:
    queue()
    {
       rear=0;
       front=0;
    }

    void insertion()
    {
        if(rear==MAX)
            cout<<"The queue is overflow"<<endl;
        else{

            cout<<"Enter the element to be inserted : "<<endl;
            cin>>item;
            Queue[rear]=item;
            ++rear;

        }

    }

        void deletion()
        {
            if(front==rear)
                cout<<"The queue is empty"<<endl;
            else
                {
                    cout<<"The deleted element is : "<<Queue[front]<<endl;
                    front++;



                }
        }

        void print()
        {
            display();
        }

protected:
    void display()
    {

        for(int i=front;i<rear;i++)
            cout<<"Value : "<<Queue[i]<<endl;
    }






};


int main()
{

    queue obj;
    obj.insertion();
    obj.insertion();
    obj.insertion();
    obj.insertion();
    obj.deletion();
    obj.print();
    return 0;


}
