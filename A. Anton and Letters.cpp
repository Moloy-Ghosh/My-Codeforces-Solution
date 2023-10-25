#include <iostream>

using namespace std;

int main()
{
    string s;
    std::getline(std::cin, s);
    int con=0;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){
            char c1=s[i];
            con++;
            s[i]='0';
            for(int j=i+1;j<len;j++){
                if(s[j]==c1) s[j]='0';
            }
        }
    }
    cout<<con<<endl;
}
