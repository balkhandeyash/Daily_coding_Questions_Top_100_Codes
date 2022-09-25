//Code 16 : Fibonacci Series upto nth term
#include <iostream>

using namespace std;

int getFib(int n)
{
    int a=0,b=1,sum;
    cout<<a<<" "<<b<< " ";
    for(int i =2; i<n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
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