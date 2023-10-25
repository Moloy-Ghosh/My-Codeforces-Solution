#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    long long int d,es=0;
    cin>>d;
    for(long long int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            continue;
        }
        else es++;
    }
    cout<<d-es<<endl;
}
