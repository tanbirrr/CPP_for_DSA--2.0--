#include<bits/stdc++.h>
using namespace std;
class Person
{
   public:
   string name;
   int age;
   Person(string name, int age)
   {
    // (*this).name=name;
    // (*this).age=age;
    this->name=name;
    this->age=age;
   }
   void hello()
   {
    cout<<"Hello"<<endl;
   }
};
int main()
{
    Person rakib("Mohammad rakib",234);
    cout<<rakib.name<<" "<<rakib.age<<endl;

    return 0;
}