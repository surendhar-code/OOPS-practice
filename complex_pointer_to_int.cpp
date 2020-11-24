#include<iostream>

using namespace std;

class complex
{

private:
    int *real;
    int *imag;
public:
    complex()
    {
        real=new int;
        imag=new int;
        *real=0;
        *imag=0;
    }

    complex(int r,int i)
    {
        real=new int;
        imag=new int;
        *real=r;
        *imag=i;

    }

    complex(complex &c)
    {
        *real=*c.real;
        *imag=*c.imag;
    }

    void getdata()
    {
        cin>>*real;
        cin>>*imag;
    }

    void display()
    {
        cout<<*real<<" + "<<*imag<<"j"<<endl;
    }


    void complex_add(complex *t3,complex *t4){

    *real=(*t3->real)+(*t4->real);
    *imag=(*t3->imag)+(*t4->imag);



    }

    ~complex(){
    cout<<"Objected is destructed"<<endl;
    }
};


int main()
{

    complex a(10,20);
    complex b(20,30);
    complex c;
    a.display();
    b.display();
    c.complex_add(&a,&b);
    c.display();
    return 0;

}
