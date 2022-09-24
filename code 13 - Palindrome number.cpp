// code 13 : Palindrome number
#include <iostream>

using namespace std;

int main()
{
    int a,b=0,c,i=0;
    cin>>a;
    c = a;
    
    while(a!=0){
        b = b*10+a%10;
        a=a/10;
    }
    if(b==c)
    cout<<c<<" is Palindrome Number";
    else
    cout<<c<<" is not a Palindrome Number";

    return 0;
}