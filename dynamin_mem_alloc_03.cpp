#include <iostream>

using namespace std;

int main(){

    int *p1, *p2, counts=0;
    p1 = new int;
    p2 = p1;

    while(1) {
        cout<<"Enter a number : "<<endl;
        cin>>*p1;

        if (*p1 == 0) {
            break;
        }
        p1++;
        counts++;

    }


    for(int i=0;i<counts;i++){
        cout<<*p2<<endl;
        p2++;
    }

    return 0;
}
