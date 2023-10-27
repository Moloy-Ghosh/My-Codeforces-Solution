#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int t=(20+(k/60));
    t=((t*60)+(k%60));
    int tr=((24*60)-t);

    int tt=0;
    int j=1;
    while(j<=n){
        tt+=j*5;
        if(tt>tr){
            break;
        }
        j++;
    }
    j--;
    cout<<j<<endl;
}
