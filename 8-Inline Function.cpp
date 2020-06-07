#include<iostream>
#include<conio.h>

using namespace std;

//declare simple function

void addition (int num1, int num2)//set function data type
{
    //function body
    int sum = num1 + num2;//add two number
    cout << "Addition is : " << sum << endl;
}

//declare inline function

 inline void division (int num1, int num2)//set function data type
{
    //function body
    int div = num1 / num2;//division of two number
    cout << "Division is : " << div << endl;
}


int main ()//start main function
{
    //Call simple function
    addition(10,20);
    //Call inline function
    division(20,10);


    getch ();
}

