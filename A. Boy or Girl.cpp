#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int c=0;
    for(int i=0;i<len-1;i++){
        if(s[i]>='a' && s[i]<='z'){
            for(int j=i+1;j<len;j++){
                if(s[i]==s[j]){
                    s[i]='0';
                    c--;
                }
            }
        }
    }
    int res=len+c;
    if(res%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
