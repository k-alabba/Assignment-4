#include "Employee.h"
/*
* Name: Alabbas, Kumai
* ID:40175088
* Employee functions
* Date: 16-11-2020
*/
Employee::Employee() { //default constructor
	id = 0;
	firstName = "";
	dateOfBirth = "";
	address = "";
	hiredYear = 0;
	salary = 0;
	areaCode = 0;
	telephoneNum = "";
}

//Setters
void Employee::setId(int id) {
	this->id = id;
}

void Employee::setAreaCode(int areaCode) {
	this->areaCode = areaCode;
}

void Employee::setHiredYear(int hiredYear) {
	this->hiredYear = hiredYear;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

void Employee::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Employee::setLastName(string lastName) {
	this->lastName = lastName;
}

void Employee::setDateOfBirth(string dateOfBirth) {
	this->dateOfBirth = dateOfBirth;
}

void Employee::setAddress(string address) {
	this->address = address;
}

void Employee::setTelephoneNum(string telephoneNum) {
	this->telephoneNum = telephoneNum;
}

//Getters
int Employee::getId() {
	return id;
}

int Employee::getAreaCode() {
	return areaCode;
}

int Employee::getHiredYear() {
	return hiredYear;
}

double Employee::getSalary() {
	return salary;
}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

string Employee::getDateOfBirth() {
	return dateOfBirth;
}

string Employee::getAddress() {
	return address;
}

string Employee::getTelephoneNum() {
	return telephoneNum;
}

string Employee::getFullName() {
	return firstName + " " + lastName;
}

bool Employee::hasSameLastNameAs(Employee emp) {
	return lastName == emp.getLastName();
}

bool Employee::hasSameSalaryOrHiredYearAs(Employee emp) {
	return salary == emp.getSalary() || hiredYear == emp.getHiredYear();
}
