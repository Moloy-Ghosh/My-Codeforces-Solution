#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0,j=(n-1);c<n;i++,j--){
            if((s[i]=='0'&& s[j]=='1') || (s[i]=='1' && s[j]=='0')){
                c+=2;
            }
            else break;
        }
        cout<<n-c<<endl;
    }
}
