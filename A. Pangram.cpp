#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    string s;
    cin>>s;
    int con=0;
    for(int i='a', j='A';i<='z';i++,j++){
        for(int k=0;k<len;k++){
            if(s[k]== i || s[k]==j){
                con++;
                break;
            }
        }
    }
    if(con==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
