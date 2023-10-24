#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float arr[n],res;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        res+=(arr[i]/(float) n);
    }
    cout<<res<<endl;
}
