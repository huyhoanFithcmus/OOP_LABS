 # [Project Emloyee payment](https://www.notion.so/Project-Emloyee-payment-78ac0241bfea4e07b502020b0c20de86)
## 20127166 - Nguyễn Huy Hoàn

### 1. How to compile and run your project
- Open the source, double click to file .sln
![Fraction Dissplay files](https://scontent.fsgn5-1.fna.fbcdn.net/v/t1.15752-9/247632150_405346201029903_7952018589532046119_n.png?_nc_cat=101&ccb=1-5&_nc_sid=ae9488&_nc_ohc=vZV99A44JSUAX-ypRYb&_nc_ht=scontent.fsgn5-1.fna&oh=e928dfc708002c56bde2ca412b10857e&oe=61C3944F)
- At that file, click on Local Window Debugger
![Local Window Debugger](https://scontent.fsgn5-5.fna.fbcdn.net/v/t1.15752-9/248014792_593251065061679_696619455663120266_n.png?_nc_cat=100&ccb=1-5&_nc_sid=ae9488&_nc_ohc=0a9oObiLYKcAX8rl4gZ&_nc_ht=scontent.fsgn5-5.fna&oh=3946bdee84a0d1f9c1a39132ad1db8df&oe=61C50061)
✨You can see the result on the console✨
![Result](https://scontent.fsgn5-10.fna.fbcdn.net/v/t1.15752-9/260407886_1253244715196355_668183154404087552_n.png?_nc_cat=110&ccb=1-5&_nc_sid=ae9488&_nc_ohc=PK3XBG5MVFQAX_ik5SR&_nc_ht=scontent.fsgn5-10.fna&oh=73065b19fac76121277adac9607c0b87&oe=61C25A9E)
### 2. My Infomation
- Student ID: 20127166
- Name : Nguyễn Huy Hoàn

### 3.List of what I have done? 
``` cpp
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
```

### 4. List of what I haven't done?
- nothing

### 5. Video DEMO
https://youtu.be/9UfMM8oSrYc
### 6. Expected grade : 9.0