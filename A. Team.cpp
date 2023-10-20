#include <iostream>

using namespace std;

int main()
{
    int pSet;
    int tCrt=0;
    cin>>pSet;
    for(int i=0;i<pSet;i++){
        int arr[3];
        int sure=0;
        for(int j=0;j<3;j++){
            cin>>arr[j];
            if(arr[j]==1)sure++;
        }
        if(sure>1) tCrt++;
    }
    cout<<tCrt<<endl;
}
