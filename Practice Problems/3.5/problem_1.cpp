#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   string name;
   int roll;
   char section;
   int math_marks;
   int cls;

   Student(string name,int roll,char section,int math_marks,int cls)
   {
      this->name=name;
      this->roll=roll;
      this->section=section;
      this->math_marks=math_marks;
      this->cls=cls;
   }
};
int main()
{
    Student * tanbir=new Student("Tanbir",9,'A',98,7);
    Student * karim =new Student("karim",10,'B',99,9);
    Student * ronaldo=new Student("Cristiano ronaldo",7,'A',100,8);

    if(tanbir->math_marks>karim->math_marks && tanbir->math_marks > ronaldo->math_marks)
    cout<<tanbir->name;
    else if(karim->math_marks > tanbir->math_marks && karim->math_marks > ronaldo->math_marks)
    cout<<karim->name;
    else cout<<ronaldo->name;

    return 0;
}