#include <iostream>

using namespace std;

int main()
{
    string s1,s2,sn="";
    cin>>s1>>s2;
    int len=s1.size();
    for(int i=0;i<len;i++){
        if(s1[i]==s2[i]) sn+='0';
        else sn+='1';
    }
    cout<<sn<<endl;
}
