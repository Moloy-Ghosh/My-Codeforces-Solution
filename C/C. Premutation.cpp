#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n-1];
        int ans[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>arr[i][j];
            }
        }
        int partsLine,firstNum,i;
        if(arr[0][0]==arr[1][0]){
            firstNum=arr[0][0];
            for(i=2;i<n;i++){
                if(firstNum!=arr[i][0]){
                    partsLine=i;
                    break;
                }
            }
        }
        else if(arr[0][0]==arr[2][0]){
            firstNum=arr[0][0];
            for(i=1;i<n;i++){
                if(firstNum!=arr[i][0]){
                    partsLine=i;
                    break;
                }
            }
        }
        else{
            partsLine=0;
            firstNum=arr[1][0];
        }
        ans[0]=firstNum;
        for(int j=1;j<n;j++){
            ans[j]=arr[partsLine][j-1];
        }
        for(int j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
}
