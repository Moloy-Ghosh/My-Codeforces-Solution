#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a==b || a%b==0)cout<<"0"<<endl;
        else if(a>b){
            int t=a/b;
            cout<<((t+1)*b)-a<<endl;
        }
        else{
            cout<<b-a<<endl;
        }
    }
}
