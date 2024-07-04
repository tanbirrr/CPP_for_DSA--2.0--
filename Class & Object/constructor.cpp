#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   int roll;
   int cls;
   double cgpa;

   Student(int roll,int cls,double cgpa)
   {
    this->roll=roll;
    this->cls=cls;
    this->cgpa=cgpa;
   }
};
int main() 
{
    Student rahim(29,9,5.01);
    Student karim(45,10,4.33);

    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.cgpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.cgpa<<endl;
    return 0;
}