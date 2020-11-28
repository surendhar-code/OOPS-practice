#include<iostream>
#include<iomanip>
using namespace std;

class Matrix
{
private:
    int row,col;
    int mat[20][20];
public:
    Matrix() //default constructor
    {
        cout<<"Enter the rows and columns : "<<endl;
        cin>>row>>col;
        cout<<"Enter the matrix elements : "<<endl;
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    cin>>mat[i][j];
                }



            }
    }



    Matrix(Matrix &b) //copy constructor
    {
        row=b.row;
        col=b.col;
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    mat[i][j]=b.mat[i][j];
                }



            }

    }

    void display()
    {
        cout<<"Printing the matrix elements : "<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<mat[i][j]<<endl;
            }
        }
    }

    ~Matrix()
    {
        cout<<"Objected is destructed"<<endl;
    }
};

int main()
{
    Matrix m1;
    m1.display();
    Matrix m2(m1);
    m2.display();
    return 0;


}
