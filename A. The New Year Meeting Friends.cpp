#include <iostream>

using namespace std;

int main()
{
    int a[3],t[3];
    cin>>a[0]>>a[1]>>a[2];
    t[0]=(abs(a[0]-a[1])+abs(a[0]-a[2]));
    t[1]=(abs(a[1]-a[0])+abs(a[1]-a[2]));
    t[2]=(abs(a[2]-a[0])+abs(a[1]-a[2]));
    int mn=t[0];
    for(int i=0;i<3;i++){
        if(t[i]<mn) mn=t[i];
    }
    cout<<mn<<endl;
}
