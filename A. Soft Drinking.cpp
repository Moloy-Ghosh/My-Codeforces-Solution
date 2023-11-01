#include <iostream>

using namespace std;

int main()
{
    int cocacola3, cocacola4, cocacola5, cocacola6, cocacola7, cocacola8, cocacola9, cocacola10;
    cin>>cocacola3>>cocacola4>>cocacola5>>cocacola6>>cocacola7>>cocacola8>>cocacola9>>cocacola10;
    int cocacola=cocacola4*cocacola5;
    int cocacola1=cocacola6*cocacola7;
    int cocacola2=cocacola8;
    int coca=0;
    while(cocacola>=cocacola9 && cocacola1>0 && cocacola2>=cocacola10){
        coca++;
        cocacola-=cocacola9;
        cocacola1--;
        cocacola2-=cocacola10;
    }
    int cola=coca/cocacola3;
    cout<<cola<<endl;
}
