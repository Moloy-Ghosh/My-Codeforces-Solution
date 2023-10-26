#include <iostream>

using namespace std;

int main()
{
    long long int n;
    long long int s=0,c=0;
    cin>>n;
    int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
        if(s==-1){
            c++;
            s=0;
        }
    }
    cout<<c<<endl;
}
