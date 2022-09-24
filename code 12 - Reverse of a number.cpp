// code 12 : Reverse of a number
#include <iostream>

using namespace std;

int main()
{
    int a,b[10],i=0;
    cin>>a;
    
    while(a!=0){
        b[i] = a%10;
        cout<<b[i];
        a=a/10;
        i++;
    }

    return 0;
}