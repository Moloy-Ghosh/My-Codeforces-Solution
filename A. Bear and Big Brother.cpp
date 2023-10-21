#include <iostream>

using namespace std;

int main()
{
    int l,b;
    cin>>l>>b;
    int i;
    for(i=1;;i++){
        l=l*3;
        b=b*2;
        if(l>b) break;
    }
    cout<<i<<endl;
}
