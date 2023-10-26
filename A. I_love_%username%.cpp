#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int mx,mn;
        if(i>0){
            if(arr[i]>mx){
                c++;
                mx=arr[i];
            }
            else if(arr[i]<mn){
                c++;
                mn=arr[i];
            }
            else continue;
        }
        else mx=arr[i],mn=arr[i];
    }
    cout<<c<<endl;
}
