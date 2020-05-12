#include <iostream>
using namespace std;
#include "node.h"
class list
{
private :

	node* head;
	int size;
public :

	list();
	~list();
	void append(int val);
	void insert(int val , int idx);
	void remove(int idx);
	void print();

};

