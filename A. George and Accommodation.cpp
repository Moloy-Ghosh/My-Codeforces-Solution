#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int p[n],q[n];
    for(int i=0;i<n;i++){
        cin>>p[i]>>q[i];
        int f=q[i]-p[i];
        if(f>1) c++;
    }
    cout<<c<<endl;
}
