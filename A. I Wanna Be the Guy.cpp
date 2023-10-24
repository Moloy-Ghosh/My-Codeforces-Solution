#include <iostream>

using namespace std;

int main()
{
    int n,p,q,arr[202],f=1;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int j=p;j<(q+p);j++){
        cin>>arr[j];
    }
    for(int i=1;i<=n;i++){
        int j;
        for(j=0;j<(p+q);j++){
            if(i==arr[j]){
                break;
            }
        }
        if(j==(p+q)){
            f=0;
            break;
        }
    }
    if(f==1)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
