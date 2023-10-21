#include <iostream>

using namespace std;

int main()
{
    int st;
    cin>>st;
    int result=0;
    for(int i=0;i<st;i++){
        string c;
        cin>>c;
        if(c=="X++"||c=="++X"){
            result++;
        }
        else result--;
    }
    cout<<result<<endl;
}
