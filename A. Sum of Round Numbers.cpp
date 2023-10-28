#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int n;
        cin>>n;
        std::string s= std::to_string(n);
        long long int c=0, len=s.size();
        for(long long int j=0;j<len;j++){
            if(s[j]!='0')c++;
        }
        cout<<c<<endl;
        long long int m=10;
        while (n>0){
            if(n%m!=0){
                cout<<n%m<<" ";
            }
            n=n-(n%m);
            m=m*10;
        }
        cout<<endl;
    }
}
