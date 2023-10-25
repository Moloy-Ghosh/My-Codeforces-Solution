#include <iostream>

using namespace std;

int main()
{
    int n,con=0;
    cin>>n;
    int h[n],g[n];
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(k==j) continue;
            if(h[j]==g[k]) con++;
        }
    }
    cout<<con<<endl;
}
