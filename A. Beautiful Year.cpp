#include <iostream>

using namespace std;

int main()
{
    int yr, f=0;
    cin>>yr;
    while(f!=1){
        yr++;
        int tyr=yr;
        int d1=tyr%10;
        tyr=tyr/10;
        int d2=tyr%10;
        tyr=tyr/10;
        int d3=tyr%10;
        tyr=tyr/10;
        if(tyr!=d3 && tyr!=d2 && tyr!=d1 && d3!=d2 && d3!=d1 && d2!=d1){
            f=1;
            break;
        }
    }
    cout<<yr<<endl;
}
