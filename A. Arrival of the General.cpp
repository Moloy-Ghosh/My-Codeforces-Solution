#include <iostream>

using namespace std;

int main()
{
    int n,mx=0,mn=101,mxi,mni;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mx<arr[i]){
            mx=arr[i];
            mxi=i;
        }
        if(mn>arr[i]){
            mn=arr[i];
            mni=i;
        }
        if(mn==arr[i])mni=i;
    }
    int res=mxi+(n-(mni+1));
    if(mxi>mni)res--;
    cout<<res<<endl;
}
