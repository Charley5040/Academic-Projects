// Name: DAVID JAMES-NWOKOCHA
// Student Number:200518242
// Date:17-01-2025
#include "myFunction.h"

/* Function:  readArray
   Purpose:   To read values from a file into an array.
   Parameters: Base address of an array.
   Returns:   void
-----------------------------------------------------------*/
void readArray(int twoDArray[][c], string inFile)
{

  ifstream inpF;
  int i;
  int j;

  inpF.open(inFile);

  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      inpF >> twoDArray[i][j];
    }
  }

  inpF.close();

} // end readArray function
void printArray(int num[][c]){
    cout<<"The sum is:"<<endl;
for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << num[i][j] << " ";
    }
    cout << endl;
  }
}
//endprintArrayFunction
void sumArray(int num[][c], int num2[][c], int num3[][c]){
    for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			num3[i][j] = num[i][j]+num2[i][j];
			
		}
	}
}