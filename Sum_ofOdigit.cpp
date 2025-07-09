#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for (int i=0;n>0;i++)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<<sum;
    return 0;
}
