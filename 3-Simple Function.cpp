#include<iostream>
#include<conio.h>

using namespace std;

//declare function

void addition (int num1, int num2)//set function data type
{
    //function body
    int sum = num1 + num2;//add two number
    cout << "Addition is : " << sum << endl;
}

int main ()//start main function
{
    //Call addition function
    addition(10,20);

    getch ();
}
