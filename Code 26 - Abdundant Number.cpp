//Code 26 : Abdundant Number
#include <iostream>

using namespace std;
void isAbdundant(int n)
{
    int fact_sum=0, oriN=n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        fact_sum+=i;
    }
    if(oriN<fact_sum)
    cout<<oriN<<" is Abdundant Number";
    else
    cout<<oriN<<" is Not Abdundant Number";
}

int main()
{
    int n;
    cin>>n;
    isAbdundant(n);

    return 0;
}