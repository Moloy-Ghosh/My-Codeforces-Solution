#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int arr[5][5];
    int k,m;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                k=i;
                m=j;
            }
        }
    }
    int res=abs(2-m)+abs(2-k);
    cout<<res<<endl;
}
