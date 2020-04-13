#include "department.h"
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

void department::set_Dname(string n)
{
	D_name = n;

}

string department::get_Dname()
{
	return D_name;
}

void department::set_manager(string m)
{
	manager_name= m;
}

string department::get_manager()
{
	return manager_name;
}

void department::set_DID(int d)
{
	departmentID = d;
}

int department::get_DID()
{
	return departmentID;
}









