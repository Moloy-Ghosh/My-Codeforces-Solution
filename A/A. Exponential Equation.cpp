#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0,sum=0;
        cin>>n;
        if(n%2==0){
            x=1;
            y=n/2;
        }
        else{
            for(int i=2;sum<n;i++){
                for(int j=1;sum<n;j++){
                    sum=pow(i,j)*j+pow(j,i)*i;
                    if(sum==n){
                        x=i;
                        y=j;
                        break;
                    }
                }
                if(sum==n){
                    break;
                }
            }
        }

        if(x==0 && y==0) cout<<"-1"<<endl;
        else cout<<x<<" "<<y<<endl;
    }
}
