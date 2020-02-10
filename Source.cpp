#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"
//Program Name: Project 2
//Programmer Name: Bryant Dumas
//Description: 
//Date Created:3/11/2018


using namespace std;
ofstream outFile;


int main()
{
	


	Employee a();
	Employee Names;
	Employee SocialSecurity;
	Employee PhoneNum;
	

	string First_Name;
	string Last_Name;
	string SSN;
	string EmployeeNum;

	//Employee Class Start

	/*
	Employees First Name 
	*/
	cout << "What is your First Name " << endl;
	cin >> First_Name;
	
	/*
	Employees Last Name
	*/
	cout << "What is you Last Name " << endl;
	cin >> Last_Name;

	Names.setFirstandLast(First_Name, Last_Name);


	/*
	Employee Number
	*/
	cout << "Enter your Employee number (xxx-L) " << endl;
	cin >> EmployeeNum;


	//Calls the setPhoneNumber function and passes Employee number
	PhoneNum.setEmployeeNumber(EmployeeNum);


	/*
	Emplpoyee SSN
	*/

	cout << "Enter your Social Security Number (xxx-xx-xxxx)" << endl;
	cin >> SSN;

	//Calls setSSN function and pass in social security number
	SocialSecurity.setSSN(SSN);
	SocialSecurity.getSSN();


	

	/*
	End of Employee Class						 
	*/

	//Start of SalaryEmployeePay Class

	
	
	SalaryEmployeePay Money;
	
	int AnnualPay;
	cout << "Annual Pay: $";
	cin >> AnnualPay;

	Money.setAnnualPay(AnnualPay);


	Money.setWeeklyPay();

	int TaxCode;
	cout << "TaxCodeRate: ";
	cin >> TaxCode;

	Money.setTaxRateCode(TaxCode);
	

	

	/*
	End of SalaryEmployeeClass	*/

	
	//HourlyEmployee Class

	HourlyEmployee Hourly;
	
	int HoursWorked;
	int A;
	cout << "How many hours do you work a week:";
	cin >> HoursWorked;

	

	Hourly.setHoursWorked(HoursWorked);
	Hourly.getHoursWorked();
	Hourly.setHourlyRate(AnnualPay);
	Hourly.getHourlyRateWorked();
	



	// Start of HourlyEmployeePay class


	HourlyEmployeePay b;
	
	int Tax;
	string Status;
	cout << "Tax Rate Code:";
	cin >> Tax;
	cout << "What is your Work Status(F - Fulltime/ P - Partime)";
	cin >> Status;

	b.setOverTime( AnnualPay, HoursWorked); //Passing in Annual Pay and HoursWorked because I am not able to access the variables from HourEmployee Class
	b.setTaxRate(Tax);
	b.setWorkStatus(Status);
	b.getOverTime();
	b.getTaxRate();
	//End of HourlyEmployeePay

	
	//Start of AgencyEmployeePay
	
	AgencyEmployeePay c;

	string company;

	cout << "What company are you paying: ";
	cin >> company;

	
	cout << endl;
	cout << "Print Functions" << endl;


	float taxTotal = b.getTaxRate();
	float overtimePay = b.getOverTime();
	float Hoursworked = Hourly.getHoursWorked();
	float HourlyRate = Hourly.getHourlyRateWorked();
	
c.printPay(taxTotal, overtimePay, HoursWorked, HourlyRate);
	//Print Functions
	Names.PrintNames();
	SocialSecurity.printSSN();
	cout << "Success/Failure(1/0) of Social Security Number: " << SocialSecurity.setSSN(SSN) << endl; //Success or failure of Social Security Number
    PhoneNum.PrintEmployeeNum();
	cout << "Success/Failure(1/0) of  Employees Number: " << PhoneNum.setEmployeeNumber(EmployeeNum) << endl;
	Money.PrintAnnualPay();
	cout << "Success/Failure(1/0) of Annual Pay: " << Money.setAnnualPay(AnnualPay) << endl;
	Money.PrintWeeklyPay();
	Money.PrintTaxrateCode();
	cout << "Success/Failure(1/0) of Tax Rate Code: " << Money.setTaxRateCode(TaxCode) << endl;
 	Hourly.printHoursWorked();
	cout << "Success/Failure(1/0) of Hours Worked: " << Hourly.setHoursWorked(HoursWorked) << endl;
	Hourly.printHourlyRate();
	cout << "Success/Failure(1/0) of Hourly Pay Rate: " << Hourly.setHourlyRate(AnnualPay) << endl;
	b.printOvertime();
	cout << "Success/Failure(1/0) of Overtime: " << b.setOverTime(AnnualPay, HoursWorked) << endl;
	b.printTaxRate();
	cout << "Success/Failure(1/0) of Tax Rate: " << b.setTaxRate(Tax) << endl;
	b.printWorkStatus();
	cout << "Success/Failure(1/0) of Work Status: " << b.setWorkStatus(Status) << endl;
	cout << endl;
	c.printPay(taxTotal, overtimePay, HoursWorked, HourlyRate);
	cout << "End of Employee Information" << endl << endl;

	outFile.open("our.txt");

	//File Input 
	outFile << "Employees First Name: " << First_Name << endl;
	outFile << "Employess Last Name: " << Last_Name << endl;
	outFile << "Employees Social Security Number: " << SocialSecurity.getSSN() << endl;
	outFile << "Employees  Number: " << EmployeeNum << endl;
	outFile << "Employees Annual Pay: " << AnnualPay << endl;
	outFile << "Employees Weekly Pay: " << AnnualPay / 52 << endl;
	outFile << "Employees Hourly Rate: " << Hourly.printHourlyRate() << endl;
	outFile << " Employees Number of Hours Worked: " << HoursWorked << " hours" << endl;
	outFile << "Employees Number Overtime Rate: " << b.setOverTime(AnnualPay, HoursWorked) << endl;
	outFile << "Employees Work Status: " << b.printWorkStatus() << endl;
	outFile << "Companys Pay: " << c.printPay(taxTotal, overtimePay, HoursWorked, HourlyRate) << endl;
	system("pause");

	


}