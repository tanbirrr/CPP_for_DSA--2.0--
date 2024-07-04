#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   char name[100];
   int roll;
   double cgpa;
};
int main()
{
    Student a,b;
    // a.roll=27;
    // a.cgpa=3.07;
    // char temp[100]={"Tanbir"};
    // strcpy(a.name,temp);
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;
    
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}