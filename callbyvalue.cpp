/* Parameter passing : passing parameter by value vs by reference,passing array as constant pointer. */
#include<iostream>
#include<iomanip>
using namespace std;
void swap_by_value(int a ,int b)
{

int temp=a;
a=b;
b=temp;

cout<<"num1 and num2 after swapping : ";
cout<<a<<" "<<b<<endl;


}



int main()
{
    int num1,num2;
    cout<<"Enter the two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"num1 and num2 before swapping : ";
    cout<<num1<<"  "<<num2<<endl;
    swap_by_value(num1,num2);

    cout<<"Call by value original values do not change "<<endl;
    cout<<num1<<" "<<num2<<endl;







    return 0;


}
