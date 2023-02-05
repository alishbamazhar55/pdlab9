#include <iostream>
using namespace std;
main()
{
    int size;
    int product=0;
    int count=0;
    int final;
    int output=0;
    cout << "enter size od array: ";
    cin >> size;
    string colour[size];
    product=size*2;
    for (int index=0;index<size;index++)
    {
        cout << "enter colour name";
        cin >> colour[index];
    }
    for (int index=0;index<size;index++)
{
    output=index+1;
    if(colour[index]!=colour[output])
    {
                count=count+1;

    }
}
final=(product+count)-1;
cout << "totaltime: " <<  final;
}