#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,num;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            int a,b;
            if(j==0)a=arr[0];
            if(j==1)b=arr[1];
            if(j==2){
                if(a==b) num=a;
                else{
                    if(arr[2]==a)num=a;
                    else num=b;
                }
            }
        }
        for(int k=0;k<n;k++){
            if(arr[k]!=num){
                cout<<k+1<<endl;
            }
        }
    }
}
