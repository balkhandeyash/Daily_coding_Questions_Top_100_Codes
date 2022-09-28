// code 3 & 4 : Sum of First N natural Number | Sum of N natural numbers
//method 1
#include <iostream>

using namespace std;

int main()
{
    int n,a=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        a=a+i;
    }
    cout<<a;
}
