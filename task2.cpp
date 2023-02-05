#include <iostream>
using namespace std;
main()
{
    string movie_name;
    string movie[5] = {"gladiators", "starwars", "terminators", "takinglives", "tombrider"};
    int price = 500;
    float total;
    float discount;
    cout << "enter movie name: ";
    getline(cin, movie_name);
    for (int index = 0; index < 5; index++)
    {
        if (movie_name == movie[index])
        {
            if (index % 2 == 0)
            {
                discount = 0.1 * price;
            }
            else
            {
                discount = 0.05 * price;
            }
            break;
        }
    }
    total = price - discount;
    cout << total;
}