#include <iostream>
#include <stdlib.h>
#include "Events.h"


using namespace std;
// these function are for assign information about event and get information about event
Events::Events(string ename, string etime, string edecsription, int seats, double evensprice, int evenduration)
{
	name = ename;
	time = etime;
	decsription = edecsription;
	seat = seats;
	price = evensprice;
	duration = evenduration;


}
string Events::Getename(){
	return name;
}
string Events::Getetime(){
	return time;
}
string Events::Getedecsription(){
	return decsription;
}
int Events::Getseats(){
	return seat;
}
double Events::Getevensprice(){
	return price;
}

int Events::Getevenduration(){
	return duration;
}
// this is for check when user want to add event to the cart the event is enough or not.
int Events::checkseats(int require = 0){
	while (seat < require){
		cout << "\n Seats are not enough." << " Please enter the value again?" << endl;
		cin >> require;
	}
	numtickets = numtickets + require;
	seat = seat - require;
	return require;
}
// check the price of event
double Events::amount(){
	return numtickets * price;
}
// check how many tickets user have now
int Events::cart(){
	return numtickets;
}
// this is for check if user want to remove tickets from the cart, and check if tickets are enough in cart or not
int Events::reduce(int remove = 0){
	while (numtickets < remove){
		cout << "\nError, you just order " << numtickets << " tickets!  Please try again!!" << endl;
		cin >> remove;
	}
	numtickets = numtickets - remove;
	seat = seat + remove;
	return remove;
}