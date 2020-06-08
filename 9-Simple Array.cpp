#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char name[2][7];//Declare array size
    int i,j;

    //input value by loop
    for (i=0; i<2; i++)
    {
        for (j=0; j<7; j++)
        {
            cin >> name[i][j] ;
        }

    }

   //Print value by loop
    for (i=0; i<2; i++)
    {
        for (j=0; j<7; j++)
        {
            cout << name[i][j] ;
        }
        cout << " " << endl;
    }
    getch ();
}
