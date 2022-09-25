// Code 19 : Power of a number
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double base,expo,result;
    cout<<"Enter Base Number : ";
    cin>>base;
    cout<<"\nEnter Expo Number : ";
    cin>>expo;
    
    result=pow(base,expo);
    cout<<"\nPower is "<<result;
    
    

    return 0;
}