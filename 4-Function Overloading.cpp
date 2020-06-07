#include<iostream>
#include<conio.h>

using namespace std;

//Create a function
void sum(int num1,int num2)
{
    int add = num1 + num2 ;
    cout << "Working function" << endl ;
    cout << "Addition is : " << add << endl ;
}
//Overload same function with different data type
void sum(double num1,double num2,double num3)
{
    double add = num1 + num2 +num3 ;
    cout << "Working Overload function" << endl ;
    cout << "Addition is : " << add << endl ;
}
//start main function
int main ()
{
    sum(20,30);//call function
    sum(20.50,20.45,30.23);//call overload function


    getch ();
}
