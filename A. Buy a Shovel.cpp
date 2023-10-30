#include <iostream>

using namespace std;

int main()
{
    int k,r,a,i,j=1,m=0,m2,m3;
    cin>>k>>r;
    for(i=1;i<=10;i++){
        a=i*k;
        while(m<a){
            m=(j*10)+r;
            m2=j*10;
            m3=r;
            if(m==a || m2==a || m3==a)break;
            j++;
        }
        if(m==a || m2==a ||m3==a)break;
    }
    cout<<i<<endl;
}
