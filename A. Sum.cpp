#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        for(int j=0;j<2;j++){
            for(int k=j+1;k<3;k++){
                if(arr[j]<arr[k]){
                    int tem=arr[j];
                    arr[j]=arr[k];
                    arr[k]=tem;
                }
            }
        }
        if(arr[0]==arr[1]+arr[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
