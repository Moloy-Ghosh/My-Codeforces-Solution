#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int uc=0;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z') uc++;
    }
    int lc=len-uc;
    if(lc==uc || lc>uc){
        for(int i=0;i<len;i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<len;i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
}
