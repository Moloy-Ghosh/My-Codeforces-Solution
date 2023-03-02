#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        string cat="meow";
        string Cat="MEOW";
        int cont=0;
        for(int i=0,j=0;i<n;i++){
            if(i==0){
                if(s[i]==cat[j] || s[i]==Cat[j]){
                    flag=0;
                    j++;
                    cont++;
                }
                else flag=1;

                if(flag==1) break;
            }
            else if(j>3){
                if(s[i]==cat[j-1] || s[i]==Cat[j-1]){
                    continue;
                }
                else flag=1;

                if(flag==1) break;
            }
            else if(s[i]==cat[j-1] || s[i]==Cat[j-1]){
                continue;
            }
            else if(s[i]==cat[j]||s[i]==Cat[j]){
                flag=0;
                cont++;
                j++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0 && cont==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
