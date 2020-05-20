#include "order.h"
#include "meal.h"

void order::set_orderid(int i)
{
	orderId = i;
}

void order::set_branchid(int b)
{
	BranchId = b;
}

void order::set_customerid(string c)
{
	customerId = c;
}

void order::set_price(float p)
{
	price = p;
}

void order::set_discount(float d)
{
	discount = d;
}

void order::set_list(meal m)
{
	
		list.push_back(m);
	
	
}

int order::get_orderid()
{
	return orderId;
}

int order::get_branchid()
{
	return BranchId;
}

string order::get_customerid()
{
	return customerId;
}

float order::get_price()
{
	return price;
}

float order::get_discount()
{
	return discount;
}

void order::get_list()
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i].get_mealid() << "  " << list[i].get_name() << "    "<< list[i].get_price()<< endl;
	}
	
}

order::order()
{
}



