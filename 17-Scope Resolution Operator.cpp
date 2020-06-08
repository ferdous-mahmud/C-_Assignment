#include<iostream>
#include<conio.h>

using namespace std;

int x=20; //Global variable

void display ()
{
    cout << "Using scope resolution operator x = " << :: x << endl;
}

int main ()
{
    int x= 10; //local variable
    cout << "without using scope resolution operator x = " << x << endl;
    display();

    getch ();
}
