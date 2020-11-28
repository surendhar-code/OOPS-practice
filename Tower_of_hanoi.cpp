#include<iostream>
#include<iomanip>
using namespace std;


void tower_of_hanoi(int n,char f,char d,char a)
{
    if(n==1)
    {
        cout<<"Disk "<<n<<" moves from "<<f<<" to "<<d<<endl;

        return;
    }

    tower_of_hanoi(n-1,f,a,d);
    cout<<"Disk "<<n<<" moves from "<<f<<" to "<<d<<endl;
    tower_of_hanoi(n-1,a,d,f);
}

int main()
{
    int n;
    char f,d,a;
    f='A';
    d='C';
    a='B';
    cout<<"Enter the no.of disks : "<<endl;
    cin>>n;
    cout<<"no.of disks : "<<n<<endl;

    tower_of_hanoi(n,f,d,a);
    return 0;

}
