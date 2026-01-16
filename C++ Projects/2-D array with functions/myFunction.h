// Name: DAVID JAMES-NWOKOCHA
// Student Number:200518242
// Date:17-01-2025
#ifndef MYFUNCTION_H
#define MYFUNCTION_H
#include <fstream>
#include <iostream>
using namespace std;

const unsigned int r = 4;
const unsigned int c = 5;

void readArray(int num[][c], string inFile);
void printArray(int num[][c]);
void sumArray(int num[][c], int num2[][c], int num3[][c]);//function prototype
#endif