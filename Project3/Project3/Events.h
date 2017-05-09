#ifndef EVENT_H
#define EVENT_H
# include <string>
#include "Item.h"
using namespace std;

class Events: public Item 
{

public:
	Events(string iname, string etime, string idecsription, int seats, double evensprice, int evenduration);
	string Getetime();
	int Getseats();
	double Getevensprice();
	int Getevenduration();
	int checkseats(int require);
	double amount();
	int cart();
	int reduce(int remove);
	void printdetail();

private:
	int numtickets = 0;
	string answer;
	string time;
	int seat;
	double price;
	int duration;








};

#endif