#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Media
{
protected:
    char title[20];
    int price;
public:
    Media(char *s,int a)
    {
        strcpy(title,s);
        price=a;
    }

    virtual void display()
    {
        cout<<"The title : "<<title<<" price : "<<price<<endl;

    }
};


class book:public Media
{

int pages;
public:
    book(char *s,int a,int p):Media(s,a)
    {
        pages=p;
    }
    void display()
    {
        display();
        cout<<"price : "<<price<<endl;
    }

};


class Tape:public Media
{

    int time;
public:
    Tape(char *s,int a,int t):Media(s,a)
    {
        time=t;
    }

    void display()
    {
        display();
        cout<<"Time : "<<time<<endl;
    }
};

int main()
{
    book b("Java",500,1500);
    Tape t("Bigdata",200,120);
    Media *m;
    m=&b;
    m->display();
    return 0;
}
