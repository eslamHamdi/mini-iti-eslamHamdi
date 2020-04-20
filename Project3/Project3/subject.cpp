#include "subject.h"

void subject::set_name(string n)
{
	name = n;
}

void subject::set_fullmark(int f)
{
	fullmark = f;
}

void subject::set_studentmarks(int s)
{
	studentmarks = s;
}

string subject::get_name()
{
	return name;
}

int subject::get_fullmark()
{
	return fullmark;
}

int subject::get_studentmarks()
{
	return studentmarks;
}

subject subject::operator+(subject s)
{
	subject result;

	result.name = "Total grades of  " + name + " & " + s.name;
	result.fullmark = fullmark + s.fullmark;
	result.studentmarks = studentmarks + s.studentmarks;

	return result;
}

subject::subject()
{
}

subject::subject(string n, int fm, int sm) : name(n), fullmark(fm), studentmarks(sm)
{
}
