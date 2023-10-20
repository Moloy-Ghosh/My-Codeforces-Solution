#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string word;
        cin>>word;
        string nw="";
        nw+=word[0];
        int j;
        for(j=0;word[j]>='a'&& word[j]<='z';j++){}
        if(j>10){
            int k=j-2;
            nw += std::to_string(k);
            nw+=word[(j-1)];
            cout<<nw<<endl;
        }
        else cout<<word<<endl;
    }
}
