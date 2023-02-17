#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string b1,b2;
        cin>>b1>>b2;
        int c1=0,c2=0;
        for(int i=1;i<n;i++){
            if(b1[i-1]==b1[i]) c1++;
        }
        for(int i=1;i<m;i++){
            if(b2[i-1]==b2[i]) c2++;
        }
        if(c1==0 && c2==0) cout<<"YES"<<endl;
        else if((c1>1)||(c2>1)||(c1>0 && c2>0))cout<<"NO"<<endl;
        else{
            if(b1[n-1]==b2[m-1]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
