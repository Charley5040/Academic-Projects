// Name:DAVID JAMES-NW0KOCHA
// Student Number:200518242
// Date:23-01-25

// Filename: main.cpp
// Purpose: Implement functions to read in and print an Employee struct
//          and write another function that passes in an array of Employees and
//          returns the index of the found id
//          (the functions will be stored in Employee.cpp)
#include "Employee.h"
int main()
{
  // declare an array of Employees
  Employee hire[NUM_OF_EMPLOYEES];
  // declare a variable to store index of Employees array where the id was found
  int employeeIndex;
  // declare a variable to store the Employee id to search for in array
  int employeeId;

  cout << fixed << showpoint << setprecision(2);

  // read in data for each employee
  for (int i = 0; i < NUM_OF_EMPLOYEES; i++)
  {
    hire[i] = readEmployee();
    cin.ignore(256, '\n');
  }
  cout << endl;
  // print out data for each employee
  for (int i = 0; i < NUM_OF_EMPLOYEES; i++)
  {
    printEmployee(hire[i]);
  }

  //----Add code below for Step2----
  cout<<"Enter an Id to look for: ";
	cin>>employeeId;// prompt the user for an id

 employeeIndex = findEmployee(hire,employeeId,NUM_OF_EMPLOYEES);// call the findEmployee function

 if(hire[employeeIndex].id==employeeId){
   cout<<"Found Employee: "<<hire[employeeIndex].name<<endl;
 }else{
  cout<<"Did not find an Employee with that Id!"<<endl;
 }// if found, display the name of the employee that goes with the id
}
  