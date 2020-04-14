// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "department.h"
#include "employee.h"
using namespace std;

void option1(string n, string m, int d, department dep[], int& departmentnumber);

 void option2(string Ename, float salary, int ed, int age, employee E[], int& employeenumber);

void option3(string s, employee E[], int c, int employeenumber);
 

void option4(department dep[], employee E[], int employeenumber, int departmentnumber);

int departmentnumber = 0;
int employeenumber = 0;
employee E[500];
department dep[10];
string n, m , Ename , s ;
int op ,d ,ed , age , c;
float salary;

int main()
{
   
    while (true) {

        cout << "Select the operation that you want:" << endl;
        cout << "Type 1 for adding a department" << endl;
        cout << "Type 2 for adding an employee" << endl;
        cout << "Type 3 for changing an employee's department" << endl;
        cout << "Type 4 for printing a report for the departments" << endl;
        cout << "If you want to quit type 5" << endl;

        
        cin >> op;

        if (op == 1) {


            option1(n, m, d, dep, departmentnumber);

        }

        else if (op == 2) {

            option2(Ename, salary, ed, age, E , employeenumber);


        }

        else if (op == 3) {

            option3(s, E, c, employeenumber);


        }

        else if (op== 4) {

            option4(dep, E, employeenumber, departmentnumber);

        }

        else if (op == 5) {

            return 0;

        }

        else
            cout << "wrong input" << endl;

    }

    return 0;
}
void option1(string n, string m, int d, department dep[], int& departmentnumber)
{
    
    cout << "enter department name" << endl;

    cin >> n;
    dep[departmentnumber].set_Dname(n);

    cout << "enter manager name" << endl;

    cin >> m;
    dep[departmentnumber].set_manager(m);

    cout << "enter department id" << endl;

    cin >> d;
    dep[departmentnumber].set_DID(d);

    departmentnumber++;

}
void option2(string Ename, float salary, int ed, int age, employee E[], int& employeenumber)
{
   
    cout << "enter employee name" << endl;

    cin >> Ename;
    E[employeenumber].set_name(Ename);

    cout << "enter salary" << endl;

    cin >> salary;
    E[employeenumber].set_salary(salary);

    cout << "enter department id" << endl;

    cin >> ed;
    E[employeenumber].set_employee_department(ed);

    cout << "enter age" << endl;

    cin >> age;
    E[employeenumber].set_age(age);

    employeenumber++;
}

void option3(string s, employee E[], int c, int employeenumber)
{
    cout << "enter employee name" << endl;

    cin >> s;
    for (int i = 0; i < employeenumber; i++)

        if (s == E[employeenumber].get_name())
        {
            cout << "enter department id" << endl;

            cin >> c;
            E[employeenumber].set_employee_department(c);
        }
        else {
            cout << "wrong name" << endl;
        }

}

void option4(department dep[], employee E[], int employeenumber, int departmentnumber)
{
    for (int i = 0; i < departmentnumber; i++)
    {
        int cnt = 0;
        for (int j = 0; j < employeenumber; j++)
        {

            if (dep[i].get_DID() == E[j].get_employee_department())
            {
                cnt++;
            }
        }
        cout << "department " << "  " << dep[i].get_DID() << "  " << "has " << cnt << "  " << "employees" << endl;
    }

}

