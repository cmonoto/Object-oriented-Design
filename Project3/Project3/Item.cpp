#include <iostream>
#include <stdlib.h>
#include "Item.h"

using namespace std;

Item::Item(string iname, string idecsription){
	this->name = iname;
	this->decsription = idecsription;
}
Item::~Item() {}

string Item::Getdecsription(){
	return decsription;
}
string Item::Getname(){
	return name;
}
void Item::print(){
	cout << "Name: \"" << Getname() << "\" Description: \"" << Getdecsription() << "\"" << endl;
}