#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    if(len==1){
        cout<<s<<endl;
    }
    else{
        for(int i=0;i<len-2;i=i+2){
            for(int j=i+2;j<len;j=j+2){
                if(s[i]>s[j]){
                    char c=s[i];
                    s[i]=s[j];
                    s[j]=c;
                }
            }
        }
        cout<<s<<endl;
    }
}
