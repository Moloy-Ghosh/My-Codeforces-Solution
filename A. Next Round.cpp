#include <iostream>

using namespace std;

int main()
{
    int c,k;
    cin>>c>>k;
    int s[c];
    int ad=0;
    for(int i=0;i<c;i++){
        cin>>s[i];
    }
    for(int i=0;i<c;i++){
        if(s[i]>=s[k-1] && s[i]!=0){
            ad++;
        }
    }
    cout<<ad<<endl;
}
