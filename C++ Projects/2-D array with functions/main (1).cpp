// Name: DAVID JAMES-NWOKOCHA
// Student Number:200518242
// Date:17-01-2025

// Filename: main.cpp
// Purpose: Implement a C++ program to add two 4 by 5 matrices
//          and then output the results to the screen
//          as outlined in the exercise description.

#include "myFunction.h"


int main()
{
  int i;
  int j;
  int num[r][c];
  int num2[r][c];
  int num3[r][c];
 
  string file1;
  string file2;

  // prompt user for input
  cout << "Please enter the name of the file containing data for Array 1: "<<endl;
  cin >> file1;
  cout << "Please enter the name of the file containing data for Array 2: "<<endl;
  cin >> file2;
  

  readArray(num, file1);
  readArray(num2, file2);
  sumArray(num,num2,num3);
  printArray(num3);

  return 0;
}

