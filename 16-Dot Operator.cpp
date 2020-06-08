#include<iostream>
#include<conio.h>

using namespace std;

//Creating class

class Student //class name Student
{
    public : //Student public class
  //declare class property
  int id;
  char name[21];

};

int main () //main function
{
    //object of class
    Student Student_1;

    //Input object value from user
   cout << "Please Input Your ID : ";
   cin >> Student_1.id; //dot_operator
   cout << "Please Input Your Name : ";
   cin >> Student_1.name;//Use dot_operator

    //print object value
    cout << "Student ID : " << Student_1.id << endl;
    cout << "Student Name : " << Student_1.name ;
    getch ();
}










