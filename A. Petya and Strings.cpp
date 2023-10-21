#include <iostream>

using namespace std;

int main()
{
    string st1,st2;
    cin>>st1>>st2;
    int len=st1.length();
    int con=0;
    for(int i=0;i<len;i++){
        if(st1[i]==st2[i]) continue;
        else{
            st1[i]=tolower(st1[i]);
            st2[i]=tolower(st2[i]);
        }

        if(st1[i]>st2[i]){
            cout<<"1"<<endl;
            return 0;
        }
        else if(st1[i]<st2[i]){
            cout<<"-1"<<endl;
            return 0;
        }
        else continue;
    }

    cout<<"0"<<endl;
    return 0;
}
