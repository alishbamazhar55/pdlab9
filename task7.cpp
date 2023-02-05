#include <iostream>
using namespace std;
main()
{
    string word1,word2;
    cout << "enter word 1: ";
    cin >> word1;
    cout << "enter word 2: ";
    cin >> word2;
    int counter=0;
    int count1=word1.length();
    int count2=word2.length();
    for (int index=0;index<count1 ;index++)
    {
        for (int j=0;j< count2 ; j++)
        {
              if(word1[index]==word2[j])
              {
                counter++ ;
                word2[j]='.';
                break;
             }
            
         }
        
    }
    cout << counter << endl;
}