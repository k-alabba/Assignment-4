#pragma once
#include <string>
using namespace std;
/*
* Name: Alabbas, Kumai
* ID:40175088
* Employee Specification
* Date: 16-11-2020
*/
class Employee {
	private: 
		int id;
		string firstName, lastName;
		string dateOfBirth;
		string address;
		int hiredYear;
		double salary;
		int areaCode;
		string telephoneNum;
		
	public:
		Employee(); //default constructor
		void setId(int id);
		void setAreaCode(int areaCode);
		void setHiredYear(int hiredYear);
		void setSalary(double salary);
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setDateOfBirth(string dateOfBirth);
		void setAddress(string address);
		void setTelephoneNum(string telephoneNum);

		int getId();
		int getAreaCode();
		int getHiredYear();
		double getSalary();

		string getFirstName();
		string getLastName();
		string getDateOfBirth();
		string getAddress();
		string getTelephoneNum();
		string getFullName();

		bool hasSameLastNameAs(Employee emp);
		bool hasSameSalaryOrHiredYearAs(Employee emp);
};

