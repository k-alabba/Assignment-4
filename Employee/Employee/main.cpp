#include <iostream>
#include "Employee.h"
using namespace std;
/*
* Name: Alabbas, Kumai
* ID:40175088
* Main function for testing the Employee class
* Date: 16-11-2020
*/

//Testing Employee class
int main() {
	Employee firstEmp, secondEmp, thirndEmp;

	firstEmp.setFirstName("Rose");
	firstEmp.setLastName("Gomar");
	firstEmp.setHiredYear(2010);
	firstEmp.setSalary(90000);

	secondEmp.setFirstName("Souleymane");
	secondEmp.setLastName("Gomar");
	secondEmp.setHiredYear(2012);
	secondEmp.setSalary(10); //poor guy

	thirndEmp.setFirstName("Kumai");
	thirndEmp.setLastName("Alabbas");
	thirndEmp.setHiredYear(2010);
	thirndEmp.setSalary(3); //very poor guy
	thirndEmp.setDateOfBirth("25-Jan-1999");

	printf("\nFirst Employee has the same last name as the second?\n");
	firstEmp.hasSameLastNameAs(secondEmp) ? cout << "True" : cout << "False";

	printf("\n\nFirst Employee has the same last name as the third?\n");
	firstEmp.hasSameLastNameAs(thirndEmp) ? cout << "True" : cout << "False";

	printf("\n\nFirst Employee has the same salary or hired year as the second?\n");
	firstEmp.hasSameSalaryOrHiredYearAs(secondEmp) ? cout << "True" : cout << "False";

	printf("\n\nFirst Employee has the same salary or hired year as the third?\n");
	firstEmp.hasSameSalaryOrHiredYearAs(thirndEmp) ? cout << "True" : cout << "False";

	cout << "\n\nThe full name of the first employee is " << firstEmp.getFullName();

	cout << "\n\nThe date of birth of the third employee is " << thirndEmp.getDateOfBirth() << "\n";
	return 0;
}