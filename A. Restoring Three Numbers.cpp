#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i;j<4;j++){
            if(arr[j]>arr[i]){
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    int a,b,c;
    a=arr[0]-arr[1];
    b=arr[0]-arr[2];
    c=arr[0]-arr[3];
    cout<<a<<" "<<b<<" "<<c<<endl;
}
