#include<iostream>
#include<iomanip>
using namespace std;

//Bubble sort

template <class T>

void bubble_sort(T a[],int n)
{
    T temp;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }

    cout<<"The elements after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Value : "<<a[i]<<endl;
    }
}


int main()
{
    int arr[10]={5,9,2,45,100};
    float brr[10]={1.1,5.3,0.5,40.2,15.9};
    char crr[10]={'e','b','z','i','s'};
    bubble_sort(arr,5);
    bubble_sort(brr,5);
    bubble_sort(crr,5);

    return 0;
}
