// Name:DAVID JAMES-NW0KOCHA
// Student Number:200518242
// Date:23-01-25
#include "Employee.h"
Employee readEmployee(){
	Employee fire;
	cout<<"Employee Name?: ";
	getline(cin, fire.name);
	cout<<"Employee Id?: ";
	cin>>fire.id;
	cout<<"Employee Yearly Salary?: ";
	cin>>fire.salary;
	return fire;
}
void printEmployee(const Employee& c){
	cout<<"The Employee info is: "<<c.name<<", "<<c.id<<", "<<"$"<<c.salary<<endl;
}
int findEmployee(const Employee array[],int tId,int num){
	for(int i=0; i<num; i++){
		if (array[i].id==tId){
			return i;
		}
	}
	return -1;
}