#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string pi="314159265358979323846264338327";
    while(t--){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<30;i++){
            if(pi[i]==s[i])c++;
            else break;
        }
        cout<<c<<endl;
    }
}
