#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum,even=0,odd=0,c=0,e=0,o=0;
        cin>>n;
        int arr[n];
        int tre[3];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)even++;
            else odd++;
        }
        if(odd>=3){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]%2!=0){
                    cout<<i+1<<" ";
                    c++;
                }
                if(c==3)break;
            }
            cout<<endl;
        }
        else if(even>=2 && odd>=1){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0 && e<2){
                    cout<<i+1<<" ";
                    e++;
                    c++;
                }
                else if(arr[i]%2!=0 && o<1){
                    cout<<i+1<<" ";
                    o++;
                    c++;
                }
                if(c==3)break;
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
