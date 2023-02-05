#include <iostream>
using namespace std;
main()
{
 int size=4;

 string character[size];
 for (int index=0;index < size ;index++)
 {
    cout << "enter number";
    cin >> character[index];
 }
 bool check;
 for (int index=0;index <size ;index++)
 {
    if (character[index]==character[0])
    {
        check=true;

    }
    else 
    {
        check=false;
    }
 }
 if (check==true)
 {
    cout << "true";

 }
 else 
 {
    cout << "false";
 }
}