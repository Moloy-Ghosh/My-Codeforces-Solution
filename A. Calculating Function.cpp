#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n,f;
    cin>>n;
    if(n%2==0) f=n/2;
    else f=-((n/2)+1);
    cout<<f<<endl;
}
