#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int b=0;
    for(int i=1;i<=w;i++){
        b+=(i*k);
    }
    if(b>n) cout<<b-n<<endl;
    else cout<<"0"<<endl;
}
