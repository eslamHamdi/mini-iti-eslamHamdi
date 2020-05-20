#include "meal.h"

void meal::set_mealid(int m)
{
	mealId = m;
}

void meal::set_price(float p)
{
	price = p;
}

void meal::set_name(string n)
{
	name = n;
}

int meal::get_mealid()
{
	return mealId;
}

float meal::get_price()
{
	return price;
}

string meal::get_name()
{
	return name;
}

meal::meal(int i, float p, string n) : mealId(i), price(p), name(n)
{
}

meal::meal()
{
}



