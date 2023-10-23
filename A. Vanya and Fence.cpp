#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n],w=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>h) w+=2;
        else w++;
    }
    cout<<w<<endl;
}
