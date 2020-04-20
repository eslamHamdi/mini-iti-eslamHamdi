#pragma once
#include <iostream>
#include <string>
using namespace std;
class subject
{
private :
	string name;
	int fullmark , studentmarks;

public:

	void set_name(string n);
	void set_fullmark(int f);
	void set_studentmarks(int s);

	string get_name();
	int get_fullmark();
	int get_studentmarks();

	subject operator +(subject s);

	subject();
	subject(string n, int fm, int sm);


};

