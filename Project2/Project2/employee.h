#pragma once
#include <iostream>
#include <string>
using namespace std;
class employee
{
private:
	string name;
	float salary;
	int employee_department, age;

public:
	void set_name(string n);
	string get_name();
	void set_salary(float s);
	float get_salary();
	void set_employee_department(int d);
	int get_employee_department();
	void set_age(int g);
	int get_age();


};

