#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int arr[n];
        arr[0]=s-r;
        int temp=r;
        for(int i=1;i<n;i++){
            arr[i]=temp/(n-i);
            temp-=arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
