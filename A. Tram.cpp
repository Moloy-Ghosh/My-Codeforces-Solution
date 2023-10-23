#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tot=0,a,b,cap=0;
    for(int i=0;i<n;i++){
        cin>>a;
        tot-=a;
        cin>>b;
        tot+=b;
        if(cap<tot) cap=tot;
    }
    cout<<cap<<endl;
}
