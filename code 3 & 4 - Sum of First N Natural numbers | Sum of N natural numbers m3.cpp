//code 3 & 4 : Sum of First N Natural numbers | Sum of N natural numbers
//method 3
#include <iostream>

using namespace std;
int getsum(int n){
    if(n==0)
    return 0;
    else
    return n=n+getsum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int sum=getsum(n);
    cout<<sum;

    return 0;
}