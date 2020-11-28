#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int num,guess,attempts=0;
    srand(time(0)); //seed random number generator
    num=rand()%100+1; //random number between 1 and 100
    cout<<"Computer ji : Guess the number......"<<endl;

    do
    {
        if(attempts<3)
        {
            cout<<"Enter a guess between 1 and 100 : ";
            cin>>guess;

            if(guess>num)
                cout<<"Your guess is too high"<<endl;
            else if(guess<num)
                cout<<"Your guess is too low"<<endl;
            else
                cout<<"Your guess is correct!!!!!!!! and you got it in "<<attempts<<" attempts!!!!!!!!!!"<<endl;

            ++attempts;

        }
        else
        {
            cout<<"sorry!!!! your attempts are over!!!!!"<<endl;
            break;

        }


    }while(guess!=num);
    return 0;
}
