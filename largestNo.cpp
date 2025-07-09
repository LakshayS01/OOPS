#include <iostream>
using namespace std;
int main ()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int lgst=n1;
    if (n2>lgst) lgst=n2;
    if (n3>lgst) lgst=n3;

    cout<<"\nlargest no. is:"<<lgst;
    return 0;
}