#include "customer.h"

void customer::set_Mnumber(string m)
{
	
	mobilenumber = m;
}

void customer::set_blocknumber(int b)
{
	blocknumber = b;
}

void customer::set_ordercount(int o)
{
	ordercount = o;
}

void customer::set_name(string n)
{
	name = n;
}

string customer::get_Mnumber()
{
	
	return mobilenumber;
}

int customer::get_blocknumber()
{
	return blocknumber;
}

int customer::get_ordercount()
{
	return ordercount;
}

string customer::get_name()
{
	return name;
}

customer::customer():ordercount(0)
{
}
