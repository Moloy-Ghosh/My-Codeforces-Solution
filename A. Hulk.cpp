#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1="I hate",s2=" that ",s3="I love",s4=" it",res="";
    for(int i=1;i<=n;i++){
        if(i%2!=0) res+=s1;
        else res+=s3;
        if(i!=n){
            res+=s2;
        }
        else res+=s4;
    }
    cout<<res<<endl;
}
