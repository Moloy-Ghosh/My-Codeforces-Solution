#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    string s;
    cin>>s;
    int con=0;
    for(int i=0;i<len-1;i++){
        if(s[i]=='0') continue;
        else{
            for(int j=i+1;j<len;j++){
                if(s[i]==s[j]){
                    con++;
                    s[i]='0';
                }
                else break;
            }
        }
    }
    cout<<con<<endl;
}
