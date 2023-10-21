#include <iostream>

using namespace std;

int main()
{
    int point;
    cin>>point;
    if(point<=5){
        cout<<"1"<<endl;
    }
    else{
        int tot=point/5;
        if(point%5!=0)tot++;
        cout<<tot<<endl;
    }
}
