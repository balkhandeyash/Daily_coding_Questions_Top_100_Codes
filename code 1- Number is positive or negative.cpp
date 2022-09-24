// code 1: Number is positive or negative
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    
    if(a>0){
        cout<<"Number is positive";
    }
    else if(a==0){
        cout<<"Number is zero";
    }
    else{
        cout<<"Number is negative";
    }

    return 0;
}