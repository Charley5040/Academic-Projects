// Name:DAVID JAMES-NWOKOCHA
// Student Number:200518242
// Date:23-01-2025
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

const unsigned int NUM_OF_EMPLOYEES = 5;

struct Employee
{
  string name;
  int id;
  double salary;
};

void printEmployee(const Employee &c);
Employee readEmployee();
int findEmployee(const Employee array[],int tId,int num);//----Add findEmployee prototype for Step 2----
#endif