// code 14 : Armstrong number
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,sum=0,a=0,b=0,len=0,last=0,d=0;
    cin>>n;
    a=n;
    b=a;
    d=b;
    
    while(n>0){
        d = n%10;
        n=n/10;
        len++;
    }
    
    while(a>0){
        last=a%10;
        a=a/10;
        sum += pow(last,len);
    }
    
    if(sum==b){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    
    
    
    
    return 0;
}