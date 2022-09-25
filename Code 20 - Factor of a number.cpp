//Code 20 : Factor of a number
#include <iostream>

using namespace std;

int factorOf(int n)
{
    if(n<2 && n>-1){
        return n;
    }
    if(n>1){
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            cout<<i<<" ";
        }
    }
    if(n<0){
        for(int i=-1;i>=n;i--)
        {
            if(n%i==0)
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    
    factorOf(n);

    return 0;
}