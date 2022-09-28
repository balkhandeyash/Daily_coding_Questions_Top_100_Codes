//Code 25 : Harshad Number
#include <iostream>

using namespace std;
void isHarshad(int n)
{
    int num=n,digit=0;
    while(n!=0)
    {
        digit=digit+n%10;
        n/=10;
    }
    if((num%digit==0))
    cout<<num<<" is Harshad Number";
    else
    cout<<num<<" is Not Harshad Number";
}
int main()
{
    int n;
    cin>>n;
    isHarshad(n);

    return 0;
}