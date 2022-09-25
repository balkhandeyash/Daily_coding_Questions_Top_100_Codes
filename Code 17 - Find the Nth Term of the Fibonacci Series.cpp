//Code 17 : Find the Nth Term of the Fibonacci Series 
#include <iostream>

using namespace std;

int getFib(int n)
{
    int a=0,b=1,sum;
    for(int i =2; i<n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        if(i==n-1)
        cout<<sum;
    }
    return 0;
    
}
int main()
{
    int n;
    cin>>n;
    getFib(n);
    return 0;
}