#include<iostream>
#include<conio.h>

using namespace std;

void Address ()
{
    //User Define Data type
    char name [23] = "Ferdous_Mahmud_Akash";
    char street [10] = "Sonadanga";
    char city [10] = "Khulna";
    //Default data type
    int post_code = 9208 ;
    //print output
    cout << name << endl; cout << street << endl;
    cout << city << endl; cout << post_code << endl;
}
int main()
{
 Address (); //call function
    getch ();
}
