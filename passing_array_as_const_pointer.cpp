#include<iostream>
#include<iomanip>
using namespace std;

void array_print(int *a,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        *(a+i)+=5;
    }
    for(i=0;i<n;i++)
    {
        cout<<"The elements are : "<<endl;
        cout<<*(a+i)<<endl;
    }

}

int main()
{
    int arr[10];
    int n,i;
    cout<<"Enter the no.of array elements : "<<endl;
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }


    array_print(arr,n);
    return 0;
}
