#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string x="Jessica";
    stringstream ss(s);
    int flag=0;
    string word;
    while(ss>>word)
    {
        if(word==x)
        {
            flag=1;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}