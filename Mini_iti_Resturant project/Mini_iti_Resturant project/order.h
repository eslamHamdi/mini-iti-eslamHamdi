#pragma once
#include "meal.h"
#include "vector"
class order
{
private:
	int orderId, BranchId ;
	string customerId;
	float  price , discount;
	vector<meal> list;

public:

	void set_orderid(int i);
	void set_branchid(int b);
	void set_customerid(string c);
	void set_price(float p);
	void set_discount(float d);
	void set_list(meal m);

	int get_orderid();
	int get_branchid();
	string get_customerid();
	float get_price();
	float get_discount();
	void get_list();

	order();
	

}; 

