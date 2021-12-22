#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Employee
{
protected:
	string name;
public:
};

class Daily_employee : public Employee
{
private:
	int Total_days_worked;
	int Money_paid_for_each_day;
public:
	// contructor
	Daily_employee(string name, int Total_days_worked, int Money_paid_for_each_day);
	// getters
	int get_Total_days_worked();
	int get_Money_paid_for_each_day();
	// setters
	void set_Total_days_worked(int Total_days_worked);
	void set_Money_paid_for_each_day(int Money_paid_for_each_day);
	// methods
	int get_salary();
};

class Hourly_employee : public Employee
{
private:
	int Number_of_hours;
	int Money_paid_for_each_hour;
public:
	// constructor
	Hourly_employee(string name, int Number_of_hours, int Money_paid_for_each_hour);
	// getters
	int get_Number_of_hours();
	int get_Money_paid_for_each_hour();
	// setters
	void set_Number_of_hours(int Number_of_hours);
	void set_Money_paid_for_each_hour(int Money_paid_for_each_hour);
	// methods
	int get_salary();
};

class Product_employee : public Employee
{
private:
	int Number_of_products;
	int Money_paid_for_each_product;
public:
	// constructor
	Product_employee(string name, int Number_of_products, int Money_paid_for_each_product);
	// getters
	int get_Number_of_products();
	int get_Money_paid_for_each_product();
	// setters
	void set_Number_of_products(int Number_of_products);
	void set_Money_paid_for_each_product(int Money_paid_for_each_product);
	// methods
	int get_salary();
};


class Manager :public Employee
{
private:
	int Number_of_employees_managed;
	int Money_paid_for_manage_employee;
	int Fixed_payment_for_month;
public:
	// constructor
	Manager(string name, int Number_of_employees_managed, int Money_paid_for_manage_employee, int Fixed_payment_for_month);
	// getters
	int get_Number_of_employees_managed();
	int get_Money_paid_for_manage_employee();
	int get_Fixed_payment_for_month();
	// setters
	void set_Number_of_employees_managed(int Number_of_employees_managed);
	void set_Money_paid_for_manage_employee(int Money_paid_for_manage_employee);
	void set_Fixed_payment_for_month(int Fixed_payment_for_month);
	// methods
	int get_salary();
};

void readFile(string filename);