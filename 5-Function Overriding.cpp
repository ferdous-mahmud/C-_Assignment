#include<iostream>
#include<conio.h>
using namespace std;
class Person // person class
{
    public :
        void display ()
        {
          cout << "I am a Person" << endl ;
        }
};
class Student : public Person // extend class
{
    public :
        // display function override
        void display ()
        {
          cout << "I am a Student" << endl ;
        }
};
class Teacher : public Person // extend class
{
    public :
        // display function override again
        void display ()
        {
          cout << "I am a Teacher" << endl ;
        }
};
int main ()//main function
{
    Person p;
    p.display();
    Student s;
    s.display();
    Teacher t;
    t.display();
    getch ();
}











