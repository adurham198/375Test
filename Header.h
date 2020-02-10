#pragma once
#include <string>
#ifndef Header_H
#define Header_H
//Program Name: Project 2
//Programmer Name: Bryant Dumas
//Description: 
//Date Created:3/11/2018

using namespace std;

class Employee
{

public:
Employee(); //Default Constructor

void setFirstandLast(string first, string last);

bool setSSN(string str);
bool setEmployeeNumber(string str);
void printSSN();
void PrintNames();
void PrintEmployeeNum();
string getSSN();



 

private:
	string FirstName;
	string LastName;
	string SSN; 
	string EmployeeNum;
	bool methodStatus;
	bool methodStatus33; // For Employees Number
	
	
};

class SalaryEmployeePay: Employee
{

public:
	SalaryEmployeePay(); // default Constructor
	bool setAnnualPay(int Annual);
	void setWeeklyPay();
	bool setTaxRateCode(int TaxCode);
	int getTaxRate();
	void PrintAnnualPay();
	int getAnnualPay();
	void PrintWeeklyPay();
	int PrintTaxrateCode();
private:
	float AnnualPay;
	float WeekPay;
	float TaxRateCode;
	bool methodStatus_2; //TaxRateCode boolean
	bool methodStatus_1; //Annual Pay boolean

	};





class HourlyEmployee: Employee
{
public:
	bool setHourlyRate(int Annual);
	float getHourlyRateWorked();
	bool setHoursWorked(int Hours);
	float getHoursWorked();
	float printHourlyRate();
	void printHoursWorked();





private:
	bool methodStatus_5; //For HourlyPayRate
	bool methodStatus_6; //For Numbers of hours worked
	float HourlyRate;
	float NumHoursWorked;
};





class HourlyEmployeePay: HourlyEmployee
{

public:
	bool setOverTime(int Annaul, float Hours);
	int getOverTime();
	bool setTaxRate(int tax);
	float getTaxRate();
	bool setWorkStatus(string Status);
	
	void printOvertime();
	void printTaxRate();
	string printWorkStatus();
		


private:
	int OverTimePayRate;
	float TaxRateCode;
	string WorkStatus;
	bool methodStats_7;
	bool methodStats_9;
	bool methodStat_0;
};

class AgencyEmployeePay
{
public:
	void setCompany(string s);
	int printPay(double tax, double OvertimePay, float HoursWorked, float Rate);



private:
	string Company;
	float agencyToPay;


};

#endif // !Header_H

