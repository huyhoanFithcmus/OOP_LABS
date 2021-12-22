#include "Header.h"

// class Employee

// class DailyEmployee

Daily_employee::Daily_employee(string name, int Total_days_worked, int Money_paid_for_each_day)
{
	this->name = name;
	this->Total_days_worked = Total_days_worked;
	this->Money_paid_for_each_day = Money_paid_for_each_day;
}

int Daily_employee::get_Total_days_worked()
{
    return Total_days_worked;
}

int Daily_employee::get_Money_paid_for_each_day()
{
    return Money_paid_for_each_day;
}

void Daily_employee::set_Total_days_worked(int Total_days_worked)
{
    this->Total_days_worked = Total_days_worked;
}

void Daily_employee::set_Money_paid_for_each_day(int Money_paid_for_each_day)
{
    this->Money_paid_for_each_day = Money_paid_for_each_day;
}

int Daily_employee::get_salary()
{
    return Total_days_worked * Money_paid_for_each_day;
}

// class HourlyEmployee

Hourly_employee::Hourly_employee(string name, int Number_of_hours, int Money_paid_for_each_hour)
{
    this->name = name;
	this->Number_of_hours = Number_of_hours;
	this->Money_paid_for_each_hour = Money_paid_for_each_hour;
}

int Hourly_employee::get_Number_of_hours()
{
    return Number_of_hours;
}

int Hourly_employee::get_Money_paid_for_each_hour()
{
    return Money_paid_for_each_hour;
}

void Hourly_employee::set_Number_of_hours(int Number_of_hours)
{
    this->Number_of_hours = Number_of_hours;
}

void Hourly_employee::set_Money_paid_for_each_hour(int Money_paid_for_each_hour)
{
    this->Money_paid_for_each_hour = Money_paid_for_each_hour;
}   

int Hourly_employee::get_salary()
{
    return Number_of_hours * Money_paid_for_each_hour;
}

// class Product_employee

Product_employee::Product_employee(string name, int Number_of_products, int Money_paid_for_each_product)
{
	this->name = name;
	this->Number_of_products = Number_of_products;
	this->Money_paid_for_each_product = Money_paid_for_each_product;
}

int Product_employee::get_Number_of_products()
{
    return Number_of_products;
}

int Product_employee::get_Money_paid_for_each_product()
{
    return Money_paid_for_each_product;
}

void Product_employee::set_Number_of_products(int Number_of_products)
{
    this->Number_of_products = Number_of_products;
}

void Product_employee::set_Money_paid_for_each_product(int Money_paid_for_each_product)
{
    this->Money_paid_for_each_product = Money_paid_for_each_product;
}

int Product_employee::get_salary()
{
    return Number_of_products * Money_paid_for_each_product;
}       

// class Manager

Manager::Manager(string name, int Number_of_employees_managed, int Money_paid_for_manage_employee, int Fixed_payment_for_month)
{
    this->name = name;
    this->Number_of_employees_managed = Number_of_employees_managed;
    this->Money_paid_for_manage_employee = Money_paid_for_manage_employee;
    this->Fixed_payment_for_month = Fixed_payment_for_month;
}

int Manager::get_Number_of_employees_managed()
{
    return Number_of_employees_managed;
}

int Manager::get_Money_paid_for_manage_employee()
{
    return Money_paid_for_manage_employee;
}

int Manager::get_Fixed_payment_for_month()
{
    return Fixed_payment_for_month;
}

void Manager::set_Number_of_employees_managed(int Number_of_employees_managed)
{
    this->Number_of_employees_managed = Number_of_employees_managed;
}

void Manager::set_Money_paid_for_manage_employee(int Money_paid_for_manage_employee)
{
    this->Money_paid_for_manage_employee = Money_paid_for_manage_employee;
}

void Manager::set_Fixed_payment_for_month(int Fixed_payment_for_month)
{
    this->Fixed_payment_for_month = Fixed_payment_for_month;
}   

int Manager::get_salary()
{
    return Number_of_employees_managed * Money_paid_for_manage_employee + Fixed_payment_for_month;
}

void readFile(string filename)
{
	ifstream file;
	file.open(filename);
	string line;

	while(!file.eof())
	{
		// read the file November2021.txt
		getline(file, line);

		stringstream ss(line);
		string type_of_employee;
		string name;
		getline(ss, type_of_employee, ':');
		getline(ss, name);
		if(type_of_employee == "DailyEmployee")
		{
			getline(file, line);
			// line = "DailyPayment=100$; TotalDays=28", get the 100 and 28
			stringstream ss(line);
			string DailyPayment;
			string TotalDays;
			string ignore;
			getline(ss, ignore, '=');
			getline(ss, DailyPayment, '$');
			getline(ss, ignore, '=');
			getline(ss, TotalDays);
			Daily_employee DE(name, stoi(DailyPayment), stoi(TotalDays));
			cout << "Name: " << name << " " << ", " << type_of_employee << ", Salary: " << DE.get_salary() << endl;
			cout << endl;
		}
		if(type_of_employee =="HourlyEmployee")
		{
			getline(file,line);
			// line = "HourlyPayment=100$; TotalHours=28", get the 100 and 28
			stringstream ss(line);
			string HourlyPayment;
			string TotalHours;
			string ignore;
			getline(ss, ignore, '=');
			getline(ss, HourlyPayment, '$');
			getline(ss, ignore, '=');
			getline(ss, TotalHours);
			int HourlyPayment_int = stoi(HourlyPayment);
			int TotalHours_int = stoi(TotalHours);
			Hourly_employee HE(name, HourlyPayment_int, TotalHours_int);
			cout << "Name: " << name << ", " << type_of_employee << ", Salary: " << HE.get_salary() << endl;
			cout << endl;
		}
		if(type_of_employee == "ProductEmployee")
		{
			getline(file, line);
			// line = "Number_of_products=100; Money_paid_for_each_product=100$", get the 100 and 100
			stringstream ss(line);
			string Number_of_products;
			string Money_paid_for_each_product;
			string ignore;
			getline(ss, ignore, '=');
			getline(ss, Money_paid_for_each_product, '$');
			getline(ss, ignore, '=');
			getline(ss, Number_of_products);
			int Money_paid_for_each_product_int = stoi(Money_paid_for_each_product);
			int Number_of_products_int = stoi(Number_of_products);
			Product_employee PE(name, Number_of_products_int, Money_paid_for_each_product_int);
			cout << "Name: " << name << ", " << type_of_employee << ", Salary: " << PE.get_salary() << endl;
			cout << endl;
		}
		if(type_of_employee == "Manager")
		{
			getline(file, line);
			// line = "FixedPayment=500$; TotalEmployees=5; PaymentPerEmployee=100$", get the  500, 5 and 100
			stringstream ss(line);
			string Number_of_employees_managed;
			string Money_paid_for_manage_employee;
			string Fixed_payment_for_month;
			string ignore;
			getline(ss, ignore, '=');
			getline(ss, Fixed_payment_for_month, '$');
			getline(ss, ignore, '=');
			getline(ss, Number_of_employees_managed, ';');
			getline(ss, ignore, '=');
			getline(ss, Money_paid_for_manage_employee, '$');
			int Money_paid_for_manage_employee_int = stoi(Money_paid_for_manage_employee);
			int Fixed_payment_for_month_int = stoi(Fixed_payment_for_month);
			int Number_of_employees_managed_int = stoi(Number_of_employees_managed);
			Manager ME(name, Number_of_employees_managed_int, Money_paid_for_manage_employee_int, Fixed_payment_for_month_int);
			cout << "Name: " << name << ", " << type_of_employee << ", Salary: " << ME.get_salary() << endl;
			cout << endl;
		}
	}

	/* string line = "DailyEmployee: John Walker";
	// read the name of the employee of the line
	string name = line.substr(line.find(":") + 1, line.find(" "));
	// read the type of the employee of the line
	string type = line.substr(0, line.find(":"));
	cout << "name: " << name << endl;
	cout << "type: " << type << endl; */
}