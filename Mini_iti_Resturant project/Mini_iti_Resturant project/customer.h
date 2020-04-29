#pragma once
#include <string>
#include <iostream>
using namespace std;

class customer
{
private:
	int blocknumber, ordercount;
	string mobilenumber;
	string name;

public:
	void set_Mnumber(string m);
	void set_blocknumber(int b);
	void set_ordercount(int o);
	void set_name(string n);

	string get_Mnumber();
	int get_blocknumber();
	int get_ordercount();
	string get_name();

	customer();

};

