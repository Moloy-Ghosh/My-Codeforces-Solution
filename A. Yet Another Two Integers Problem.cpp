#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int a,b;
        cin>>a>>b;
        long long int diff=abs(b-a);
        long long int ans=diff/10;
        if(diff%10!=0) ans=ans+1;
        cout<<ans<<endl;
    }
}
