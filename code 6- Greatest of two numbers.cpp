//code 6: Greatest of two numbers
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a;
    }
    else if(a==b){
        cout<<"Equal";
    }
    else
    {
        cout<<b;
    }

    return 0;
}