//code 9 : Prime number
#include <iostream>

using namespace std;

int main()
{
    int a,count=0;
    cin>>a;
    
    for(int i=1;i<=a;i++){
        if(a%i==0)
        count++;
    }
    if(a==0 || a==1)
    cout<<"The given number "<< a << " is not Prime Number";
    else if(count<=2)
    cout<<"The given number "<< a << " is Prime Number";
    else
    cout<<"The given number "<< a << " is not Prime Number";

    return 0;
}