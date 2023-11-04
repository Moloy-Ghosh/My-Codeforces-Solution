#include <iostream>
//visit my website www.biri.000.pe
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(s=="YES" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS" || s=="yES" || s=="YeS" || s=="YEs")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
