#include<iostream>
#include<conio.h> //header file for getch

using namespace std;

int main () //main function
{
    //Input an integer number

    int num;
    cout << "Please input an integer number : "; //user notes

    cin >> num;

    //Print input
    cout << "You entered : " << num;



    //For clear output console
    getch();
}
