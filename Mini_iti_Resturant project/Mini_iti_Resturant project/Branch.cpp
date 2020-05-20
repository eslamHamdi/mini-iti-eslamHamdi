#include "Branch.h"
#include "order.h"
void Branch::set_id(int i)
{
	ID = i;
}

void Branch::set_blocknumber(int b)
{
	BlockNumber = b;
}

void Branch::set_orderlist(order a)
{
	
		orderlist.push_back(a);
		
}

int Branch::get_id()
{
	return ID;
}

int Branch::get_blocknumber()
{
	return BlockNumber;
}

void Branch::get_orderlist()
{
	for (int i = 0; i < orderlist.size(); i++)
	{
		cout << orderlist[i].get_branchid() << "  " << orderlist[i].get_customerid() << "  " << orderlist[i].get_price() << "  " << orderlist[i].get_discount() << endl;
		orderlist[i].get_list();
	}
	
}


