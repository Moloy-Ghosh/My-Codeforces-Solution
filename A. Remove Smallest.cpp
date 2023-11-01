#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[j]>arr[k]){
                    int tem=arr[j];
                    arr[j]=arr[k];
                    arr[k]=tem;
                }
            }
        }
        int flag=1;
        for(int j=0;j<n-1;j++){
            int diff=abs(arr[j]-arr[j+1]);
            if(diff==0 || diff==1) continue;
            else{
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
