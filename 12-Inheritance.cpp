#include<iostream>
#include<conio.h>

using namespace std;
class Person //Parent class / super class
{
public :
    string name;
    int age;
    void display_1 ()//function
    {
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl ;
    }
};
class Student : public Person // child class /sub class
{
    //name ,age , display_1 ()   inherit this class
public :
    int id;
    void  display_2()
    {

        cout << "ID : " << id << endl ;
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl ;
    }
};

int main ()
{
   Student s1;
   s1.id = 404;
   s1.name = "Ferdous Mahmud Akash";
   s1.age = 21;
   s1.display_2(); //call function
    getch ();
}


















