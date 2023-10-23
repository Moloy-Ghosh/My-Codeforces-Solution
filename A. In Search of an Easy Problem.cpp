#include <iostream>

using namespace std;

int main()
{
    int n,easy=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) easy=0;
    }
    if(easy==1) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}
