	#include "Header.h"
	#include <iostream>
	#include<string>
	//Program Name: Project 2
	//Programmer Name: Bryant Dumas
	//Description: 
	//Date Created:3/11/2018

	/*
	Description:This function takes in SSN and checks to see if it is in the 
	correct format, and contains no alphabetic characters
	Pre-Condition: Social Security Number
	Post-Condition: Returns both either an error message or boolean
	*/
	
	bool Employee::setSSN(string str)
	{
		SSN = str;
		methodStatus = 0;
		SSN = str;

		if (str.length() == 11)
		{

			if (str.at(3) == '-' && str.at(6) == '-')
			{
				str = str.replace(3, 1, "");
				str = str.replace(6, 1, "");

				for (int i = 0; i < str.length(); i++)
				{
					if (isdigit(str[i]))  //Check if SSN contains any alphabetic characters
					{
						methodStatus = true;
					}
				}
			}


			for (int i = 0; i < 10; i++) //Checks if each digit of the SSN is in the the rangee
			{

				if (str[i] < 0 && str[i] > 9)
				{
					methodStatus = false;
					
				}

			}

		}
		else
		{


			methodStatus = false;
			
		}



		return methodStatus;
	}


	/*
	Description: Checks if the phone number entered has the correct format. Also it checks if the letter entered is between
	the letter A and M
	Pre-Condition: Emplpoyees phone number
	Post-Condition:

	*/
	bool Employee::setEmployeeNumber(string str)
	{
		EmployeeNum = str;

		 methodStatus33 = 0;
		int i;

		if (str.length() != 5) //CHecks the length of phone number
		{

			methodStatus33 = false;
		
		}

		if (str.length() == 5)
		{
			if (str[3] != '-')
			{
				methodStatus33 = false;
			}
			else
			{

				methodStatus33 = true;
			}
			if (str[4] != 'A' && str[4] != 'B' && str[4] != 'C' && str[4] != 'D' && str[4] != 'E' && str[4] != 'F' && str[4] != 'G' && str[4] != 'H' && str[4] != 'I' &&str[4] != 'J' &&  str[4] != 'K' &&  str[4] != 'L' &&  str[4] != 'M')
			{


				methodStatus33 = false;
				
			}
			else
			{

				methodStatus33 = true;
			}

			for (int i = 0; i <= 2; i++)
			{
				if (!isdigit(str[i]))
				{
					methodStatus33 = false;
				}


			}
		}
		return methodStatus33;
	}

	
	

	/*
	Description: Prints out SSN number with the first 6 values masked with the letter x
	Pre-Condition: N/A
	Post-Condition
	*/

	void Employee::printSSN()
	{
		if (methodStatus == true)
		{

			SSN[0] = 'x';  //Sets each specified position of the SSN to x
			SSN[1] = 'x';
			SSN[2] = 'x';
			SSN[4] = 'x';
			SSN[5] = 'x';
			cout << "Social Security Number: " << SSN << endl;
		}
		else
		{



		}
	}


	void Employee::PrintNames()
	{
		cout << "First Name: " << FirstName << endl;
		cout << "LastName: " << LastName << endl;
	}

	void Employee::PrintEmployeeNum()
	{
		if (methodStatus33 == true)
		{ 
			cout << "Employee Phone Number: " << EmployeeNum << endl;
			cout << EmployeeNum;
		}
		else
		{

		}
	}

	string Employee::getSSN()
	{
		string Security = "xxx-xx-xxxx";
		if (methodStatus == true)
		{
			
			for (int i = 7; i <= 10; i++)
			{
				Security.at(i) = SSN.at(i);


			}
		}
		else
		{

		}
		return Security;
	}




	Employee::Employee()
	{
	}






	void Employee::setFirstandLast(string First, string last)
	{

		FirstName = First;
		LastName = last;
	}





	SalaryEmployeePay::SalaryEmployeePay()
	{
	}

	

	
	/*
	Description: This function checks to see if the Annual Pay value entered by the user is a negative number
	Pre-Condition: Annual Pay entered by the user
	Post-Condition: A message saying Input Invalid. 
	
	*/
	bool SalaryEmployeePay::setAnnualPay(int Annual)
	{
		AnnualPay = Annual;
		methodStatus_1 = 0;
		if (Annual < 0)
		{
			AnnualPay = 0;
			methodStatus_1 = false;

		}
		else
		{
			methodStatus_1 = true;
		}
		return methodStatus_1;
	}

	/*
	Description: This function sets the weekly pay value by dividing the Annual Pay that is stored in the main by 52
	Pre-Condition: Annual Pay variable
	Post-Condition: Weekly pay set to the value that calculation gets
	*/
	void SalaryEmployeePay::setWeeklyPay()
	{
		WeekPay = AnnualPay/52;
	}

	/*
	Description: This function checks the range of the TaxCode number that was entered. It checks
	if the TaxCode was less than one or greater than 3
	Pre-Condition: TaxRateCode entered by the user
	Post-Condition: A message saying Invalid TaxCode and a boolean that is false
	*/
	bool SalaryEmployeePay::setTaxRateCode(int TaxCode)
	{
		 methodStatus_2 = 0;
		switch (TaxCode)
		{
		case 1: TaxCode = 1;
			TaxRateCode = .25; cout << " ";
			methodStatus_2 = true;
			break;
		case 2: TaxCode = 2;
			TaxRateCode = .20; cout << " ";
			methodStatus_2 = true;
			break;
		case 3: TaxCode = 3;
			TaxRateCode = .15; cout << " ";
			methodStatus_2 = true;
			break;
	
		}
		
			if (TaxCode < 1 || TaxCode > 3)
			{
				TaxRateCode = 0;
				methodStatus_2 = false;

			}
			return methodStatus_2;
		
	}

	int SalaryEmployeePay::getTaxRate()
	{
		return TaxRateCode;
	}
	
	

	



	void SalaryEmployeePay::PrintAnnualPay()
	{
		if (methodStatus_1 == true)
		{
			cout << "Annual Pay:$" << AnnualPay << endl;
		}
		else
		{


		}
	}

	int SalaryEmployeePay::getAnnualPay()
	{
	
		return AnnualPay;
	}


	void SalaryEmployeePay::PrintWeeklyPay()
	{
		cout << "Weekly Pay:$" << WeekPay << endl;
	}

	int  SalaryEmployeePay::PrintTaxrateCode()
	{
		if (methodStatus_2 == true)
		{

			cout << "Tax Rate Code:" << TaxRateCode << endl;

		}
		else
		{

		}
		return TaxRateCode;
	}

	/*
	Description: This function determines if hourlyrate is greater than 10 or less than 75
	Pre-Condition: Annual Pay
	Post-Condition: Boolean Variable
	*/
	bool HourlyEmployee::setHourlyRate(int AnnualPay)
	{
		 methodStatus_5 = 0;
		HourlyRate = AnnualPay / 2080;
		
		if (HourlyRate < 10 || HourlyRate > 75)
		{

			methodStatus_5 = false;

		}
		else
		{
			methodStatus_5 = true;
		}
		return methodStatus_5;
	}

	float HourlyEmployee::getHourlyRateWorked()
	{
		return HourlyRate;
	}



	bool HourlyEmployee::setHoursWorked(int Hours)
	{
		NumHoursWorked = Hours;
		 methodStatus_6 = 0;
		if(NumHoursWorked > 60)
		{

		
			methodStatus_6 = false;
			

		}
		else
		{
			methodStatus_6 = true;
		}
		return methodStatus_6;
	}

	float HourlyEmployee::getHoursWorked()
	{


		return NumHoursWorked;
	}



	float HourlyEmployee::printHourlyRate()
	{
		if (methodStatus_5 == true)
		{
			cout << "Hourly Rate:$" << HourlyRate << endl;
		}
		else
		{


		}
		return HourlyRate;
	}

	void HourlyEmployee::printHoursWorked()
	{
		if (methodStatus_6 == true)
		{
			cout << "Hours Worked:" << NumHoursWorked << endl;
		}
		else
		{

		}
	}

	/*
	Description: This function checks whether the number of work hours is greater 
	than 40 and assigns OverTimePayRate the hourlyrate times 1.5
	Pre-Condition: Annual Pay and hours
	Post-Condition: Boolean Value
	*/
	bool HourlyEmployeePay::setOverTime(int AnnualPay, float Hours)
	{
		 methodStat_0 = 0;
		switch (Hours > 40)
		{
		case 1: OverTimePayRate = (AnnualPay/2080) * 1.5; //HourlyRate that is inherited does keep orginial value that was stored in it
			methodStat_0 = true;
			break;


		}
		switch (Hours < 40)
		{
		case 1: 
			methodStat_0 = false;
			break;
		}
	
		return methodStat_0;
	}

	int HourlyEmployeePay::getOverTime()
	{
	
		return OverTimePayRate;
	}

	/*
	Description: This function checks the range of the TaxCode number that was entered. It checks
	if the TaxCode was less than one or greater than 3
	Pre-Condition: TaxRateCode entered by the user
	Post-Condition: A message saying Invalid TaxCode and a boolean that is false
	*/
	bool HourlyEmployeePay::setTaxRate(int TaxCode)
	{

		methodStats_9 = 0;
		switch (TaxCode)
		{
		case 1: TaxCode = 1;
			TaxRateCode = .25; cout << " ";
			methodStats_9 = true;
			break;
		case 2: TaxCode = 2;
			TaxRateCode = .20; cout << " ";
			methodStats_9 = true;
			break;
		case 3: TaxCode = 3;
			TaxRateCode = .15; cout << " ";
			methodStats_9 = true;
			break;

		}

		if (TaxCode < 1 || TaxCode > 3)
		{
			
			methodStats_9 = false;
		
		}
		return methodStats_9;

	}

	float HourlyEmployeePay::getTaxRate()
	{
		return TaxRateCode;
	}
	
	/*
	Description: This function thats a string value entered by a user to WorkStatus. In addition the function checks whether
	function status has the correct string enterd
	Pre-Condition: String variable
	Post-Condition: boolean value
	*/
	bool HourlyEmployeePay::setWorkStatus(string Status)
	{
		methodStats_7 = 0;
		WorkStatus = Status;

		if (WorkStatus == "F")
		{
			WorkStatus = "Fulltime";
			methodStats_7 = true;

		}
		if (WorkStatus == "P")
		{
			WorkStatus = "Partime";
			methodStats_7 = true;

		}
		if (WorkStatus != "F" || WorkStatus != "P")
		{

			methodStats_7 = false;


		}

		return methodStats_7;
	}

	void HourlyEmployeePay::printOvertime()
	{
		if (methodStat_0 == true)
		{
			cout << "Overtime Rate:$" << OverTimePayRate << endl;
		}
		else
		{

		}
	}

	void HourlyEmployeePay::printTaxRate()
	{
		if (methodStats_9 == true)
		{
			cout << "Tax Rate:" << TaxRateCode << endl;
		}
		else
		{

		}
	}

	string HourlyEmployeePay::printWorkStatus()
	{
		if (methodStats_7 == true)
		{
			cout << "Work Status: " << WorkStatus << endl;
		}
		else
		{


		}
		return WorkStatus;
	}

	void AgencyEmployeePay::setCompany(string s)
	{
		Company = s;
	}

	int AgencyEmployeePay::printPay(double tax, double overtimePayRate, float HoursWorked, float Rate)
	{
		
		int hours = HoursWorked;
		int hoursExtra = 0;
		float moreMoney = 0;
		if (hours > 40)
		{
			hoursExtra = hours - 40;
			hours = 40;
		}
		agencyToPay = hours * Rate;
		moreMoney = hoursExtra * overtimePayRate;
		agencyToPay = agencyToPay + moreMoney;
		agencyToPay = agencyToPay * (1.00 - tax);
		cout << "$" << agencyToPay << endl;
		return  agencyToPay;
	}