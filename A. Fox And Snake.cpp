#include <iostream>

using namespace std;

int main()
{
    int n,m,k=1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0) cout<<"#";
            else{
                if(k==1){
                    if(j==(m-1)){
                        cout<<"#";
                        k=0;
                    }
                    else cout<<".";
                }
                else{
                    if(j==0){
                        cout<<"#";
                    }
                    else if(j==m-1){
                        cout<<".";
                        k=1;
                    }
                    else cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
