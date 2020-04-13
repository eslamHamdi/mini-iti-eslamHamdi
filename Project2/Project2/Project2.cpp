// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "department.h"
#include "employee.h"
using namespace std;
 void option1(string n, string m, int d, int dep[], int& departmentnumber)
{
    department a;

    cout << "enter department name" << endl;

    cin >> n;
    a.set_Dname(n);

    cout << "enter manager name"<< endl;

    cin >> m;
    a.set_manager(m);

    cout << "enter department id" << endl;

    cin >> d;
    a.set_DID(d);

    dep[departmentnumber] = a.get_DID();

    departmentnumber++;

}
void option2(string Ename, string en[], float salary, int ed, int E[], int age, int& employeenumber)
{
    employee e;
    cout << "enter employee name" << endl;

    cin >> Ename;
    e.set_name(Ename);
    en[employeenumber] = e.get_name();

    cout << "enter salary" << endl;

    cin >> salary;
    e.set_salary(salary);

    cout << "enter department id" <<endl;

    cin >> ed;
    e.set_employee_department(ed);
    E[employeenumber] = e.get_employee_department();

    cout << "enter age" << endl;

    cin >> age;
    e.set_age(age);

    employeenumber++;
}

void option3(string s, string en[], int c, int E[], int employeenumber) 
{
    cout << "enter employee name" << endl;

    cin >> s;
  for(int i =0 ; i < employeenumber ; i++)

      if (s == en[i]) 
      {
          cout << "enter department number" << endl;

          cin >> c;
          E[i] = c;
      }
      else
          cout << "wrong name";
}

void option4(int dep[], int E[], int employeenumber, int departmentnumber)
{
    for (int i = 0; i < departmentnumber; i++)
    {
        int cnt = 0;
        for (int j = 0; j < employeenumber; j++)
        {

            if (dep[i] == E[j])
            {
                cnt++;
            }
        }
        cout << "department " << "  " <<  dep[i] << "  "<< "has " << cnt << "  " << "employees" << endl;
    }

}
int departmentnumber = 0;
int employeenumber = 0;
int dep[50];
int E[1000];
string en[1000];
int op;
string m,Ename, n , s;
float salary;
int  ed,age,d,c;

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

            option2(Ename, en, salary, ed, E, age, employeenumber);


        }

        else if (op == 3) {

            option3(s, en, c, E, employeenumber);


        }

        else if (op== 4) {

            option4(dep, E, employeenumber, departmentnumber);

        }

        else if (op == 5) {

            return 0;

        }

        else
            cout << "wrong input";

    }

    return 0;
}

