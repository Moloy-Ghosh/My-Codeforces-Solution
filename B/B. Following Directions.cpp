#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int x=0,y=0;
        bool pass=false;
        for(int i=0;i<len;i++){
            if(s[i]=='L') x--;
            else if(s[i]=='R') x++;
            else if (s[i]=='U') y++;
            else if(s[i]=='D') y--;

            if(x==1 && y==1){
                pass=true;
                break;
            }
        }
        if(pass)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
