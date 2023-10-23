#include <iostream>

using namespace std;

int main()
{
    string s,l;
    cin>>s>>l;
    int len=s.size();
    int flag=1;
    for(int i=0,j=len-1;i<len;i++,j--){
        if(s[i]==l[j]) continue;
        else {
            flag=0;
            break;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
