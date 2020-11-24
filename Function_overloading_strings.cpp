#include<iostream>
#include<iomanip>
//#include<cstring>
#include<string.h>
using namespace std;


void Strcat(char *d,char *s)
{
    strcat(d,s);
    cout<<d<<" "<<s<<endl;
}

void Strcat(char *d,char *s,int n)
{
    strncat(d,s,n);
    cout<<d<<" "<<s<<endl;
}

void Strcpy(char *d,char *s)
{
    strcpy(d,s);
    cout<<d<<" "<<s<<endl;
}
void Strcpy(char *d,char *s,int n)
{
    strncpy(d,s,n);
    cout<<d<<" "<<s<<endl;
}
int main()
{
    char src[30],dest[30];
    cout<<"Enter the two strings :";
    cin>>src>>dest;
    Strcat(dest,src);
    Strcat(dest,src,3);
    Strcpy(dest,src);
    cout<<dest<<" "<<src<<endl;
    strncpy(dest,src,2);
    cout<<dest<<endl;
    return 0;

}
