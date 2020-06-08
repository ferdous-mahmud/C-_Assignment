#include<iostream>
#include<conio.h>

using namespace std;


void call (int *x,int *y)//Formal Parameter
{
    //pointer
 *x=10;
 *y=20;
}

int main()//main function
{
   int a=30,b=40;//Actual Parameter

   //call by reference
   call (&a ,& b);//memory address

   //print value
   cout << a <<endl <<b;

    getch();
}

