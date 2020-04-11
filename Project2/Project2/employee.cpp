#include "employee.h"

void employee::set_name(string n)
{
	name = n;
}

string employee::get_name()
{
	return name;
}

void employee::set_salary(float s)
{
	salary = s;
}

float employee::get_salary()
{
	return salary;
}

void employee::set_employee_department(int d)
{
	employee_department = d;
}

int employee::get_employee_department()
{
	return employee_department;
}

void employee::set_age(int g)
{
	age = g;
}

int employee::get_age()
{
	return age;
}
