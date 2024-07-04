#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,x;
    getline(cin,str);
    int cnt=0;
    cin>>x;
    stringstream ss(str);
    string word;
    while(ss>>word)
    {
        if(word==x)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}