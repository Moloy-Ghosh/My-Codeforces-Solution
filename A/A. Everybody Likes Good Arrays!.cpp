#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int c=0;
        for(int k=0;k<n-1;k++){
            if(arr[k]%2==arr[k+1]%2){
                c++;
            }
        }
        cout<<c<<endl;
    }
}
