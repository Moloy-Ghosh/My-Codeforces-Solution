#include <iostream>

using namespace std;

int main()
{
    long long int n;
    int k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10!=0) n--;
        else n=n/10;
    }
    cout<<n<<endl;
}
