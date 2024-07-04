#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespace"<<endl;
    }
    // class R
    // {

    // };
}
namespace sakib
{
    int age2=35;
    void hello2()
    {
        cout<<"Sakib namespace"<<endl; 
    }
}
using namespace rakib;
//using namespace sakib;
int main()
{
    //cout<<rakib::age<<endl;
    //cout<<sakib::age2<<endl;
    //cout<<age<<endl;
    //cout<<age2<<endl;
    cout<<age<<endl;
    hello();
    sakib::hello2();   
    return 0;
}