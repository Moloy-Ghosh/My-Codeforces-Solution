#include <iostream>

using namespace std;

int main()
{
    int a,b,diff,same;
    cin>>a>>b;
    if(a>b){
        diff=b;
        same=((a-b)/2);
    }
    else{
        diff=a;
        same=((b-a)/2);
    }
    cout<<diff<<" "<<same<<endl;
}
