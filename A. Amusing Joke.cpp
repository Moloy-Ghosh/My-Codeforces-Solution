#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    int l1=s1.size(),l2=s2.size(),l=s.size();
    if(l1+l2!=l) cout<<"NO"<<endl;
    else{
        string s3=s1+s2;
        int c=0;
         for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                if(s3[i]==s[j]){
                    s[j]='0';
                    c++;
                    break;
                }
            }
         }
         if(c==l)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
}
