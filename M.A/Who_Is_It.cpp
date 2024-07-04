#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int total_marks;

    Student(int id, char name[], char section, int total_marks) {
        this->id = id;
        strcpy( this->name,name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int id1, id2, id3;
        char name1[100], name2[100], name3[100];
        char section1, section2, section3;
        int total_marks1, total_marks2, total_marks3;

        cin>>id1>>name1>>section1>>total_marks1;

        cin>>id2>>name2>>section2>>total_marks2;

        cin>>id3>>name3>>section3>>total_marks3;

        Student a(id1, name1, section1, total_marks1);
        Student b(id2, name2, section2, total_marks2);
        Student c(id3, name3, section3, total_marks3);

        Student top=a; 

        
        if (b.total_marks > top.total_marks || 
        (b.total_marks == top.total_marks && b.id < top.id))
           {
            top = b;
           }

       
        if (c.total_marks > top.total_marks || 
           (c.total_marks == top.total_marks && c.id < top.id))
           {
            top = c;
           }

           
    cout << top.id << " " << top.name << " " << top.section << " " << top.total_marks << endl;
    
    }

    return 0;
}