#include <iostream>
using namespace std;
main()
{
    string moves[10] = {"shimmy", "shake", "pirouette", "slide", "box step", "headspin", "dosado", "pop", "lock", " arabesque"};
    string code;
    int i;
    int pin[4];
    cout << "enter your pin code:";
    cin >> code;
    for (int index = 0; index < 4; index++)
    {
        if (code[index] == '0')
        {
            pin[index] = 0;
        }
        else if (code[index] == '1')
        {
            pin[index] = 1;
        }
        else if (code[index] == '2')
        {
            pin[index] = 2;
        }
        else if (code[index] == '3')
        {
            pin[index] = 3;
        }
        else if (code[index] == '4')
        {
            pin[index] = 4;
        }
        else if (code[index] == '5')
        {
            pin[index] = 5;
        }
        else if (code[index] == '6')
        {
            pin[index] = 6;
        }
        else if (code[index] == '7')
        {
            pin[index] = 7;
        }
        else if (code[index] == '8')
        {
            pin[index] = 8;
        }
        else if (code[index] == '9')
        {
            pin[index] = 9;
        }
        else
        {
            pin[index] = 10;
        }
    }
    for (int index = 0; index < 4; index++)
    {
        if (pin[index] != 10)
        {
            cout << "\"";
            i = index + pin[index];
            if (i < 10)
            {
                cout << moves[i] << "\"";
                if (index != 3)
                    cout << ",";
            }
            else
            {
                i = index - 1;
                cout << moves[i] << "\"";
                if (index != 3)

                    cout << ",";
            }
        }
        else
        {
            cout << "invalid input! ";
            break;
        }
    }
}