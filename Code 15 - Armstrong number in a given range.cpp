//Code 15 : Armstrong number in a given range
#include <iostream>
#include <math.h>

using namespace std;
int getLen(int n) 
{
    int last_digit=0, len=0;
    while(n>0){
        last_digit=n%10;
        len++;
        n=n/10;
    }
    return len;
    
}

int isArmstrong(int a) 
{
    int sum=0,oriA,last_digit,len=0;
    oriA = a;
    len=getLen(a);
    while(a>0){
        last_digit=a%10;
        sum+=pow(last_digit,len);
        a=a/10;
    }
    return sum;
}

int main()
{
    int lower, upper,result;
    cin>>lower>>upper;
    
    for(int i = lower; i<=upper; i++)
    {
       result = isArmstrong(i);
       
       if(result==i){
           cout<<i<<" ";
       }
    }

    return 0;
}