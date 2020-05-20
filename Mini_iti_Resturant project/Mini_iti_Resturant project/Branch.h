#pragma once
#include <iostream>
#include "order.h"
#include "vector"
using namespace std;
class Branch
{
private:
	int ID, BlockNumber;
	vector<order> orderlist;

public:

	void set_id(int i);
	void set_blocknumber(int b);
	void set_orderlist(order a);

	int get_id();
	int get_blocknumber();
	void get_orderlist();



};

