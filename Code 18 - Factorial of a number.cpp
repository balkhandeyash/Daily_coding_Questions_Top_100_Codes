//Code 18 : Factorial of a number
#include <iostream>

using namespace std;
int factOf(int n)
{
    if(n<0)
    cout<<"Enter a valid number";
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return n* factOf((n-1));
}
int main()
{
    int n,a;
    cin>>n;
    if(n<0)
    cout<<"Enter a valid Positive Number";
    else
    {
    a=factOf(n);
    cout<<a;
    }
    return 0;
}