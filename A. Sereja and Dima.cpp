#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,d=0;
    for(int i=0,j=n-1,k=0; k<n;k++){
        if(k%2==0){
            if(arr[i]>arr[j]){
                s+=arr[i];
                i++;
            }
            else{
                s+=arr[j];
                j--;
            }
        }
        else{
            if(arr[i]>arr[j]){
                d+=arr[i];
                i++;
            }
            else{
                d+=arr[j];
                j--;
            }
        }
    }
    cout<<s<<" "<<d<<endl;
}
