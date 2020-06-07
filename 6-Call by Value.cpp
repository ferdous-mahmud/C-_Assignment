#include<iostream>
#include<conio.h>

using namespace std;

void call (int num1, int num2)//function for call by value
{
    //set num value
   num1=5;
   num2=10;
}

int main ()//main function
{
    //set another value
   int x=20 , y=30;

   //call value
   call (x,y);

    //print value
   cout << x << endl << y;


    getch ();
}


