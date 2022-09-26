//Code 23 : Perfect Square
#include <iostream>
#include<math.h>

using namespace std;


bool isPerfectSquare(int n){
    while(n>=0){
        long num = sqrt(n);
        return (num*num==n);
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(isPerfectSquare(n))
    cout<<"Perfect Square";
    else
    cout<<"Not Perfect Square";
    return 0;
}