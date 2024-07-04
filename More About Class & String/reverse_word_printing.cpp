#include<bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    // while(ss>>word)
      if(ss>>word)
    {
        print(ss);
        cout<<word<<endl;
        //print(ss);
        
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // while(ss>>word) coutstring word;
    // w<<word<<endl;
    print(ss);
    return 0;
}