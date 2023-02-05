#include <iostream>
using namespace std;
main()
{
    string name;
    bool isfound=false;
    getline(cin,name);
    int count=name.length();
   for (int index=0 ;index< count; index--)
    {
        if (count%2==0)
        {
            isfound=true;
            break;
        }
    }
  if (isfound==true)
  {
    cout << "true";

  }
  else
  {
    cout << "false";
  }
}

