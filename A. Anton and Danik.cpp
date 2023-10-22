#include <iostream>

using namespace std;

int main()
{
    int t,a=0,d=0;
    string s;
    cin>>t>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='A'){
            a++;
        }
        else d++;
    }
    if(a==d) cout<<"Friendship"<<endl;
    else if(a>d) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
}
