#pragma once
#include <iostream>
#include <string>
using namespace std;
class department
{
private:
	string D_name ,manager_name;
	int departmentID;

public:
	void set_Dname(string n);

		string get_Dname();

		void set_manager(string m);

		string get_manager();

		void set_DID(int d);

		int get_DID();

};

