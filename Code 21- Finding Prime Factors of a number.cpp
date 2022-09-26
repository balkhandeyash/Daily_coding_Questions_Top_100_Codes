//Code 21: Finding Prime Factors of a number 
#include <iostream>

using namespace std;
void PrimeFactor(int n){
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    for(int i=3;i<n;i=i+2)
    {
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    
    if(n>2)
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    PrimeFactor(n);
    return 0;
}