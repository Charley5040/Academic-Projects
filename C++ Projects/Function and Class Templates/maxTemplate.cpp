// Name:DAVID JAMES-NWOKOCHA
// Student Number: 200518242
// Date: 13-03-2025

// Filename: maxTemplate.cpp
// Purpose: Demonstrate the use of function templates.

#include <iostream>
#include <string>
using namespace std;

// Make a template out of the prototype
template <typename T>
T myMax(T one, T two);

int main()
{
  int int_two = 5, int_one = 3;

  cout << "The max of " << int_one << " and " << int_two << " is "
        << myMax(int_one, int_two) << endl;

  // Test your template on double and string types
  double a = 5.6, b = 7.3;
  cout << "The max of " << a << " and " << b << " is "
        << myMax(a, b) << endl;
  
  string c = "donkey", d = "apple";
  cout << "The max of " << c << " and " << d << " is "
        << myMax(c, d) << endl;
	
  return 0;
}

// Make a template out of this function. Do not forget the return type.
template<typename T>
T myMax(T one, T two)
{
  T largest;
  if (one > two)
  {
    largest = one;
  }
  else
  {
    largest = two;
  }
  return largest;
} // end of myMax function
