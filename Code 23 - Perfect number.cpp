//Code 23 : Perfect number
#include <iostream>

using namespace std;


int isPerfectNum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
int main()
{
    int n,b;
    cin>>n;
    b=isPerfectNum(n);
    if(b==n)
    cout<<"Perfect Number";
    else
    cout<<"Not Perfect Number";
    return 0;
}