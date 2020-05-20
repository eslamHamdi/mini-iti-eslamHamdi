// Mini_iti_Resturant project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Branch.h"
#include "customer.h"
#include "meal.h"
#include "order.h"
#include <vector>
using namespace std;
void menu();
void option1(vector<meal>&, int& mealnumber);
void option2(vector<customer>&, int& customernumber);
void option3();
void option4(vector<Branch>&, int& Bnumber);
void option5(vector<order>&, vector<meal>&, vector<Branch>&, int mealnumber, int customerNumber, int Bnumber, int& ordernum);
void option6(vector<Branch>&,int Bnum);

vector<meal> L;
vector<customer> c;
vector<Branch> br;
vector<order> o;
int mealnum,customerNumber ,Bnumber , ordernumber;
int main()
{
    int option;

    while (true)
    {
        menu();
        cin >> option;
        if (option == 1)
        {
            option1(L, mealnum);
        }

        else if (option == 2)
        {
            option2(c, customerNumber);
        }

        else if (option == 3)
        {

        }

        else  if (option == 4)
        {
            option4(br, Bnumber);
        }

        else if (option == 5)
        {
            option5( o,  L, br, mealnum, customerNumber, Bnumber, ordernumber);
        }

        else if (option == 6)
        {
            option6(br,Bnumber);

        }

        else if (option == 7)
        {
            return 0;
        }

        else
        {
            cout << " please enter a valid input" <<endl;
        }
    }
   
    return 0;
    
}

void menu()
{
    cout << "Welcome To Resturant Management System" << endl;
    cout << "to add new meal press 1" <<endl;
    cout << "to add new customer press 2"<<endl;
    cout << "to save city map press 3" <<endl;
    cout << "to save the branch block number press 4"<<endl;
    cout << "to make a new order press 5" <<endl;
    cout << "to print daily report press 6" <<endl;
    cout << "to quit press 7"<<endl;
}

void option1(meal list[] , int& mealnumber)
{
    cout << "enter meal name" << endl;
    string n;
    cin >> n;
    cout << "enter meal id" << endl;
    int iD;
    cin >> iD;

    cout << "enter meal price" << endl;
     
    float p;
    cin >> p;
    list[mealnumber] = meal(iD , p , n);

    mealnumber++;


}

void option2(customer c[] , int& customernumber)
{
    cout << "please enter customer name" << endl;
    string n;
    cin >> n;
    c[customernumber].set_name(n);

    cout << "please enter block number" << endl;
    int b;
    cin >> b;
    c[customernumber].set_blocknumber(b);

    cout << "please enter customer mobile number" << endl;
    string m;
    
        cin >> m;
        c[customernumber].set_Mnumber(m);
    
    
    customernumber++;
}

void option3()
{

}


void option4(Branch b[] ,int& Bnumber)
{
    
    b[Bnumber].set_id(Bnumber);
    

    cout << "please enter Branch block number" << endl;

    int bn;
    cin >> bn;
    b[Bnumber].set_blocknumber(bn);

    Bnumber++;

}

void option5(order o[], meal list[], Branch br[],int mealnumber ,int customerNumber,int Bnumber, int& ordernum)
{
    o[ordernum].set_orderid(ordernum);

    cout << "please enter customer ID" << endl;
    string i;
    cin >> i;
    o[ordernum].set_customerid(i);

    cout << "please enter Branch ID" << endl;
    int b;
    cin >> b;
    o[ordernum].set_branchid(b);

    cout << "please enter order meals & press f when you finish" << endl;

    string s;
    float price = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> s;
        if (s == "f")
        {
            break;
        }
        for (int j = 0; j < mealnumber; j++)
        {
            if (list[j].get_name() == s)
            {
               
                o[ordernum].set_list(list[j]);

                price = list[j].get_price() + price;
            }
            else
            {
                cout << "enter valid meal" << endl;
            }


        }
    }

    for (int y = 0; y < customerNumber; y++)
    {
        if (o[ordernum].get_customerid() == c[y].get_Mnumber())
        {
            
            c[y].set_ordercount(c[y].get_ordercount() + 1);
        }
    }

    cout << "please enter discount" << endl;
    float discount;
    cin >> discount;
    float total = price * discount;
    o[ordernum].set_discount(discount);
    o[ordernum].set_price(price - total);



        for (int x = 0; x < Bnumber; x++)
        {
            if (o[ordernum].get_branchid() == br[x].get_id())

                br[x].set_orderlist(o[ordernum]);
        }

    ordernum++;

}

void option6(Branch b[] ,int Bnum)

{
    char report;
    cout << "to print resturant report press r" << endl;
    cout << "to print specific Branch report press b" << endl;
    cin >> report;

    if (report == 'r')
    {
        for (int i = 0; i < Bnum; i++)
        {
            br[i].get_orderlist();
       }
    }
    else if (report == 'b')
    {
        cout << "enter Branch ID" << endl;
        int x;
        cin >> x;
        for (int i = 0; i < Bnum; i++)
        {
            if (br[i].get_id() == x)

                br[i].get_orderlist();
        }

    }
}