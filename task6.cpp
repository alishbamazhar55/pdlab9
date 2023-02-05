#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int array[size];
    int noOftimes;
    int total[size];
    cout << "enter number of times need to be done: ";
    cin >> noOftimes;
    for (int index=0;index <size ;index++)
    {
       cout <<" enter number : ";
       cin >> array[index]; 
          if (array[index]%2==0)
    {
        total[index]=array[index]-(2*noOftimes);
        
    } 
   else
    {
         total[index]=array[index]+(2*noOftimes);
        
    }
}
 for (int index=0;index <size ;index++)
 {
    cout << total[index]<<" ,";
     }


}