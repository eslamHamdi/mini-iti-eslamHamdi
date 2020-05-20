#pragma once
#include <string>
#include <iostream>
using namespace std;
class meal
{
private :
	int mealId;
	float price;
	string name;

public:
	void set_mealid(int m);
	void set_price(float p);
	void set_name(string n);

	int get_mealid();
	float get_price();
	string get_name();

	
	meal(int i, float p, string n);
	meal();

};

