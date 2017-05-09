#ifndef ITEM_H
#define ITEM_H

#include <string>


using namespace std;

class Item{
public:
	Item(string iname= " ", string idecsription=" ");
	~Item();
	string Getname();
	string Getdecsription();
	 void print();
	 virtual void printdetail() = 0;

protected:
	string name;
	string decsription;
};

#endif