#include <iostream>
using namespace std;
int main()
{
      int n, k = 0, i;
      cout << "enter a number:" << endl;
      cin >> n;
      if(n==1)
      cout<<"number not prime nor composite";
      for (i = 1; i <= n; i++)
      {
            if (n % i == 0)
            {
                  k++;
                  
            }
      }

      if (k == 2)
            cout << " inputed is  prime" << endl;
            else 
            cout<<"not prime";
      return 0;
}