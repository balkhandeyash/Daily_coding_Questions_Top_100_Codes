//Code 27 : FriendLy Pair
#include <iostream>

using namespace std;
void isFriendlyPair(int a, int b)
{
    int n1=a,n2=b,sum1=0,sum2=0;
    for(int i=1;i<n1;i++)
        {
            if(n1%i==0)
            sum1+=i;
            
           // n1/=10;
        }
    for(int j=1;j<n2;j++)
        {
            if(n2%j==0)
            sum2+=j;
            
            //n2/=10;
        }
    if((sum1/n1==sum2/n2))
    cout<<n1<<" & "<<n2<<" is FriendLy pair";
    else
    cout<<n1<<" & "<<n2<<" is Not FriendLy pair";
}

int main()
{
    int a,b;
    cin>>a>>b;
    isFriendlyPair(a,b);

    return 0;
}