//code 5: Sum of numbers in a given range
#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        sum=sum+i;
    }
    cout<<sum;
    

    return 0;
}