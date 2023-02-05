#include <iostream>
using namespace std;
main()
{
    int size;
    bool flag=false;
    cout << " enter size: ";
    cin >> size;
    int array[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number";
        cin >> array[index];
    }
    for (int index = 0; index < size; index++)
    {
        while(array[index]%10!=0)
        {

        if (array[index]%10 == 7)
        {
         flag=true;
         break;
        }
        array[index]=array[index]/10;
        }
    }
    if (flag==true)
    {
        cout << "boomb";

    }
    else 
    {
        cout << "there is no 7 in array";
    }
}
