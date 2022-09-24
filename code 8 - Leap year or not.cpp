//code 8 : Leap year or not
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    if(a%100==0){
        if(a%400==0)
        cout<<"Leap Year";
        else
        cout<<"Not Leap Year";
    }
    else{
        if(a%4==0)
        cout<<"Leap Year";
    }
    

    return 0;
}