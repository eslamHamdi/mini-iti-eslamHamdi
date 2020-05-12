#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list l;

    l.append(3);
    l.append(20);
    l.append(4);
    l.append(5);
    l.print();
    l.insert(30, 3);
    l.print();
    l.remove(1);
    l.print();

    
}


