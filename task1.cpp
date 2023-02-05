#include <iostream>
using namespace std;
main()
{ 
    string fruitName;
    int quantity;
    int total=0;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout << "enter name of fruit: ";
    cin >> fruitName;
    cout << "enter quantity of fruit: ";
    cin >> quantity;
    for (int index=0;index < 4 ;index++)
    {
        if (fruitName==fruit[index])
        {
            total=quantity*price[index];
        }
    }
    cout << total;
}