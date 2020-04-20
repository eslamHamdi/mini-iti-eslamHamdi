#include <iostream>
#include <string>
#include "subject.h"
using namespace std;

void option1(subject s[],int fm, int& subnumber);

void option2(subject s[] , int subnumber);

void option3(subject s[], int subnumber);

int main()
{
	subject s[10];
	int option, subnumber=0;
	string n;
	while (true) 
	{
		cout << "to add a subject please enter 1" << endl;
		cout << "to change subject info  please enter 2"<< endl;
		cout << "to print total marks of the student please enter 3" <<endl;
		cout << "to exit press 4" << endl;

		cin >> option;

		if (option == 1)
		{

			option1( s, subnumber);

		}

		else if (option == 2)
		{

			option2( s , subnumber);


		}

		else if (option == 3)
		{

			option3(s, subnumber);

		}

		else if (option == 4)
		{
			return 0;

		}

		else
			cout << "please enter a valid input!!!" << endl;


	}


	return 0;
}

void option1(subject s[]  , int& subnumber)
{
	cout << "please enter subject name" << endl;
	string n;
	cin >> n;
	s[subnumber].set_name(n);

	cout << "please enter subject full mark" << endl;
	int fm;
	cin >> fm;
	s[subnumber].set_fullmark(fm);

	cout << "please enter student marks" << endl;
	int sm;
	cin >> sm;
	s[subnumber].set_studentmarks(sm);
     
	subnumber++;

}

void option2(subject s[] , int subnumber)
{
	cout << "please enter subject name" << endl;
	string n;
	cin >> n;
	for (int i = 0; i < subnumber; i++)
	{
		if (s[i].get_name() == n) {

			cout << "enter subject fullmark" << endl;
			int fm;
			cin >> fm;
			s[i].set_fullmark(fm);

			cout << "enter student totalmarks" << endl;
			int sm;
			cin >> sm;
			s[i].set_studentmarks(sm);

		}
	
			
	}
	cout << "please enter correct subject name" << endl;

}


void option3(subject s[], int subnumber)
{
	subject r(" ", 0, 0);
	for (int i = 0; i < subnumber; i++)
	{

	   r = s[i] + r;

	}

	cout << "students total marks are " << " " << r.get_studentmarks() << "  marks." << endl;


}