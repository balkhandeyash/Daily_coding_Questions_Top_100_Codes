//Code 22 : Strong number
#include <iostream>

using namespace std;

int getFact(int a)
{
    if(a==0) {
        return 1;
    }
    else
    return a*getFact(a-1);
}
int isStrongNum(int n){
    int sum=0,last_digit;
    while(n!=0){
        
        last_digit=n%10;
        sum+= getFact(last_digit);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,b;
    cin>>n;
    b=isStrongNum(n);
    if(b==n)
    cout<<"Strong Number";
    else
    cout<<"Not Strong Number";
    return 0;
}