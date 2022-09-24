//code 7 : Greatest of the Three numbers
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    else if(b>a){
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }

    return 0;
}