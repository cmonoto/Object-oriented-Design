//  Jinhao chen 
// project 1
// U 94977930

#include <iostream>
#include "Events.h"
#include "Concessions.h"
#include <ctime>

using namespace std;

int main(){
	// those n, m , a , b ,c , d , e are for Events' seats and items' number, I using random to random the number, I think 
	// when people buy something, the seats and numbers are different each time.
	int n, m, a, b, c, d, e;
	// The following are thoes for judging what choice user made 
	// for example user input # of items or tickets and y/n
	int x = 0, y = 0, z = 0;
	char i, j, k, t;
	int r = 0, s = 0;
	// Here is using random to give the number of seats and items 
	srand((unsigned)time(NULL));
	n = rand() % 50 + 1;
	m = rand() % 50 + 1;
	a = rand() % 20 + 1;
	b = rand() % 20 + 1;
	c = rand() % 20 + 1;
	d = rand() % 20 + 1;
	e = rand() % 20 + 1;
	// give the information of all events and concessions

	Events event1("Avenger", "18:00 PM", "This is a action movie", n, 10.99, 90);
	Events event2("Furious 7", "20:00 PM", "This is a movie about car", m, 10.49, 120);

	Concessions concessions1("popcorn", "If you need eat someting when you watching movie, you should buy it", "Large, medium, small", 2.99, 1.99, 0.99, a, b, c);
	Concessions concessions2("Candy", "Sweet, sweet and sweet", "Large, medium, small", 2.09, 1.49, 1.09, b, c, d);
	Concessions concessions3("Coke", "Normal item, if you do not know what should you buy", "Large, medium, small", 2.49, 1.99, 1.49, c, d, e);
	Concessions concessions4("ice cream", "It is good choice when you feel hot", "Large, medium, small", 2.99, 1.99, 0.99, d, e, a);
	Concessions concessions5("Crispy chicken", "This is really delicious", "Large, medium, small", 4.99, 3.99, 2.99, e, a, b);


	// Here is output the Event's information for user
	cout << "   Hello, welcome to  kiosk inventory. \n Would you like to see some information of events? y/n " << endl;
	cin >> i;
	if (i == 'y')
	{
		cout << "\nThe first moive's name is: " << event1.Getename() << "\nTime: " << event1.Getetime() << "\nInfromation: " << event1.Getedecsription();
		cout << "\nPrice: $" << event1.Getevensprice() << "\nNumber Seats available: " << event1.Getseats() << "\nDuration: " << event1.Getevenduration() << endl;

		cout << "\nThe second moive's name is: " << event2.Getename() << "\nTime: " << event2.Getetime() << "\nInfromation: " << event2.Getedecsription();
		cout << "\nPrice: $" << event2.Getevensprice() << "\nNumber Seats available: " << event2.Getseats() << "\nDuration: " << event2.Getevenduration() << endl;

}
	// Here is output the Concessions's imformation for user

	cout << "\n Would you like to see some information of Concessions? y/n" << endl;
	cin >> j;
	if (j == 'y'){
		cout << " \n Item1: " << concessions1.Getcname() << "\n Decsription: " << concessions1.Getcdescription() << endl;
		cout << " Size: " << concessions1.Getcsize() << "\n Price: " << concessions1.Getlprice() << "  " << concessions1.Getmprice() << "   " << concessions1.Getsprice() << endl;
		cout << " Number available: " << concessions1.Getnum1() << "   " << concessions1.Getnum2() << "  " << concessions1.Getnum3() << endl;

		cout << " \n Item2: " << concessions2.Getcname() << "\n Decsription: " << concessions2.Getcdescription() << endl;
		cout << " Size: " << concessions2.Getcsize() << "\n Price: " << concessions2.Getlprice() << "  " << concessions2.Getmprice() << "   " << concessions2.Getsprice() << endl;
		cout << " Number available: " << concessions2.Getnum1() << "   " << concessions2.Getnum2() << "  " << concessions2.Getnum3() << endl;

		cout << " \n Item3: " << concessions3.Getcname() << "\n Decsription: " << concessions3.Getcdescription() << endl;
		cout << " Size: " << concessions3.Getcsize() << "\n Price: " << concessions3.Getlprice() << "  " << concessions3.Getmprice() << "   " << concessions3.Getsprice() << endl;
		cout << " Number available: " << concessions3.Getnum1() << "   " << concessions3.Getnum2() << "  " << concessions3.Getnum3() << endl;


		cout << " \n Item4: " << concessions4.Getcname() << "\n Decsription: " << concessions4.Getcdescription() << endl;
		cout << " Size: " << concessions4.Getcsize() << "\n Price: " << concessions4.Getlprice() << "  " << concessions4.Getmprice() << "   " << concessions4.Getsprice() << endl;
		cout << " Number available: " << concessions4.Getnum1() << "   " << concessions4.Getnum2() << "  " << concessions4.Getnum3() << endl;


		cout << " \n Item5: " << concessions5.Getcname() << "\n Decsription: " << concessions5.Getcdescription() << endl;
		cout << " Size: " << concessions5.Getcsize() << "\n Price: " << concessions5.Getlprice() << "  " << concessions5.Getmprice() << "   " << concessions5.Getsprice() << endl;
		cout << " Number available: " << concessions5.Getnum1() << "   " << concessions5.Getnum2() << "  " << concessions5.Getnum3() << endl;

	}

	// here is judging if user want to buy something or remove something or no
	cout << "\n\nWould you like to add(a) any items or tickets or remove(r) or no(n) to your cart? ";
	cout << " if you enter other number or anything else, it will check out with empty cart! a/r/n" << endl;
	cin >> k;
	while ((k == 'a') || (k == 'r'))
	{


		if (k == 'a'){

		
			// each time check which number user's input, from 1 --7
			cout << "Which movie or items you want to buy it? \n1(Popcorn), 2(Candy), 3(Coke), 4(Ice cream), 5(Cripsy chicken),\n 6(Avenger) , 7(Furious7)" << endl;
			cin >> x;
			if (x == 1){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions1.Getnum1() << " left." << endl;
					cin >> s;
					concessions1.checkNum1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions1.Getnum2() << " left." << endl;
					cin >> s;
					concessions1.checkNum2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions1.Getnum3() << " left." << endl;
					cin >> s;
					concessions1.checkNum3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 2) {
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions2.Getnum1() << " left." << endl;
					cin >> s;
					concessions2.checkNum1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions2.Getnum2() << " left." << endl;
					cin >> s;
					concessions2.checkNum2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions2.Getnum3() << " left." << endl;
					cin >> s;
					concessions2.checkNum3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}


			}
			else if (x == 3){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions3.Getnum1() << " left." << endl;
					cin >> s;
					concessions3.checkNum1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions3.Getnum2() << " left." << endl;
					cin >> s;
					concessions3.checkNum2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions3.Getnum3() << " left." << endl;
					cin >> s;
					concessions3.checkNum3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 4){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions4.Getnum1() << " left." << endl;
					cin >> s;
					concessions4.checkNum1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions4.Getnum2() << " left." << endl;
					cin >> s;
					concessions4.checkNum2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions4.Getnum3() << " left." << endl;
					cin >> s;
					concessions4.checkNum3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 5){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions5.Getnum1() << " left." << endl;
					cin >> s;
					concessions5.checkNum1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions5.Getnum2() << " left." << endl;
					cin >> s;
					concessions5.checkNum2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions5.Getnum3() << " left." << endl;
					cin >> s;
					concessions5.checkNum3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 6){
				cout << "\n How many tickets you want for Avenger? Now has " << event1.Getseats() << " left " << endl;
				cin >> y;
				event1.checkseats(y);
			}
			else if (x == 7){
				cout << "\n How many tickets you want for Furious7 ?Now has " << event2.Getseats() << " left " << endl;
				cin >> z;
				event2.checkseats(z);
			}
			else
			{
				cout << "\nTry again, please enter 1, 2, 3, 4, 5 , 6 , 7" << endl;
			}
		}
		// The following is when user want to remove items. user will make choice which item want to remove
		// and user will also choose which size and how many.
		if (k == 'r'){
			cout << "Which movie or items you want to remove it?\n 1(Popcorn), 2(Candy), 3(Coke), 4(Ice cream), 5(Cripsy chicken),\n 6(Avenger) , 7(Furious7)" << endl;
			cin >> x;
			if (x == 1){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions1.cart1() << " in your cart" << endl;
					cin >> s;
					concessions1.reduce1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions1.cart2() << " in your cart" << endl;
					cin >> s;
					concessions1.reduce2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions1.cart3() << " in your cart" << endl;
					cin >> s;
					concessions1.reduce3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 2) {
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions2.cart1() << " in your cart" << endl;
					cin >> s;
					concessions2.reduce1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions2.cart2() << " in your cart" << endl;
					cin >> s;
					concessions2.reduce2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions2.cart3() << " in your cart" << endl;
					cin >> s;
					concessions2.reduce3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}


			}
			else if (x == 3){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions3.cart1() << " in your cart" << endl;
					cin >> s;
					concessions3.reduce1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions3.cart2() << " in your cart" << endl;
					cin >> s;
					concessions3.reduce2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions3.cart3() << " in your cart" << endl;
					cin >> s;
					concessions3.reduce3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 4){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions4.cart1() << " in your cart" << endl;
					cin >> s;
					concessions4.reduce1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions4.cart2() << " in your cart" << endl;
					cin >> s;
					concessions4.reduce2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions4.cart3() << " in your cart" << endl;
					cin >> s;
					concessions4.reduce3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 5){
				cout << "\nWhich size? large(1) medium (2) small(3)" << endl;
				cin >> r;
				if (r == 1){
					cout << "How many? Now has " << concessions5.cart1() << " in your cart" << endl;
					cin >> s;
					concessions5.reduce1(s);
				}
				else if (r == 2){
					cout << "How many? Now has " << concessions5.cart2() << " in your cart" << endl;
					cin >> s;
					concessions5.reduce2(s);
				}
				else if (r == 3){
					cout << "How many? Now has " << concessions5.cart3() << " in your cart" << endl;
					cin >> s;
					concessions5.reduce3(s);
				}
				else{
					cout << "Try agian!!" << endl;
				}

			}
			else if (x == 6){
				cout << "\n How many tickets you want remove for Avenger? Now you has " << event1.cart() << " in your cart" << endl;
				cin >> y;
				event1.reduce(y);
			}
			else if (x == 7){
				cout << "\n How many tickets you want remove for Furious7 ? Now you has " << event2.cart() << " in your cart" << endl;
				cin >> z;
				event2.reduce(z);
			}
			else
			{
				cout << "\nTry again, please enter 1, 2, 3, 4, 5 , 6 , 7" << endl;
			}
		}
		cout << "Would you want to check your cart ? y/n " << endl;
		cin >> t;
		// here is print information about cart, how many tickets and items in cart
		if (t == 'y'){
			if (event1.cart() != 0){
				cout << "\n" << event1.cart() << " tickets for Avenger!" << endl;
			}
			if (event2.cart() != 0){
				cout << "\n" << event2.cart() << " tickets for Furious7!" << endl;
			}

			if ((concessions1.cart1() != 0) || (concessions1.cart2() != 0) || (concessions1.cart3() != 0))
			{
				cout << "\nPopcorns: ";
				concessions1.print1();
				concessions1.print2();
				concessions1.print3();
			}
			if ((concessions2.cart1() != 0) || (concessions2.cart2() != 0) || (concessions2.cart3() != 0))
			{
				cout << "\nCandy: ";
				concessions2.print1();
				concessions2.print2();
				concessions2.print3();
			}
			if ((concessions3.cart1() != 0) || (concessions3.cart2() != 0) || (concessions3.cart3() != 0))
			{
				cout << "\nCoke: ";
				concessions3.print1();
				concessions3.print2();
				concessions3.print3();
			}
			if ((concessions4.cart1() != 0) || (concessions4.cart2() != 0) || (concessions4.cart3() != 0))
			{
				cout << "\nIce cream: ";
				concessions4.print1();
				concessions4.print2();
				concessions4.print3();
			}
			if ((concessions5.cart1() != 0) || (concessions5.cart2() != 0) || (concessions5.cart3() != 0))
			{
				cout << "\nCrispy chicken: ";
				concessions5.print1();
				concessions5.print2();
				concessions5.print3();
			}
		}

		cout << "\nWould you like to add more(a) or remove(r) to your cart or no(n)? a/r/n" << endl;
		cin >> k;
		// Here is when user type no, it will check out.
		if (k == 'n')
		{
			cout << " \nWould you like to check out? if you chose (y), you cannot return to this step!!! y/n" << endl;
			cin >> i;
			if (i == 'y')
				break;
			else {
				cout << "\nWould you like to add more(a) or remove(r) to your cart or no? a/r/n" << endl;
				cin >> k;
			}
		}
	}

	// Output what do you have in your cart, and display how much you should pay this time.

	if (event1.cart() != 0){
		cout << "\n" << event1.cart() << " tickets for Avenger!" << endl;
	}
	if (event2.cart() != 0){
		cout << "\n" << event2.cart() << " tickets for Furious7!" << endl;
	}

	if ((concessions1.cart1() != 0) || (concessions1.cart2() != 0) || (concessions1.cart3() != 0))
	{
		cout << "\nPopcorns: ";
		concessions1.print1();
		concessions1.print2();
		concessions1.print3();
	}
	if ((concessions2.cart1() != 0) || (concessions2.cart2() != 0) || (concessions2.cart3() != 0))
	{
		cout << "\nCandy: ";
		concessions2.print1();
		concessions2.print2();
		concessions2.print3();
	}
	if ((concessions3.cart1() != 0) || (concessions3.cart2() != 0) || (concessions3.cart3() != 0))
	{
		cout << "\nCoke: ";
		concessions3.print1();
		concessions3.print2();
		concessions3.print3();
	}
	if ((concessions4.cart1() != 0) || (concessions4.cart2() != 0) || (concessions4.cart3() != 0))
	{
		cout << "\nIce cream: ";
		concessions4.print1();
		concessions4.print2();
		concessions4.print3();
	}
	if ((concessions5.cart1() != 0) || (concessions5.cart2() != 0) || (concessions5.cart3() != 0))
	{
		cout << "\nCrispy chicken: ";
		concessions5.print1();
		concessions5.print2();
		concessions5.print3();
	}
	if (event1.cart() != 0){
		cout << "\n \nNow you will pay\n $" << event1.amount() << " for Avenger. " << endl;
	}
	if (event2.cart() != 0){
		cout << "\n \nNow you will pay\n $" << event2.amount() << " for Furious7. " << endl;
	}
// check if you have this item or not, if you have print how much total for this item
// and then give the total price of items
	if ((concessions1.cart1() != 0) || (concessions1.cart2() != 0) || (concessions1.cart3() != 0))
	{
		cout << "\nPopcorns: ";
		concessions1.printamount1();
		concessions1.printamount2();
		concessions1.printamount3();
	}
	if ((concessions2.cart1() != 0) || (concessions2.cart2() != 0) || (concessions2.cart3() != 0))
	{
		cout << "\nCandy: ";
		concessions2.printamount1();
		concessions2.printamount2();
		concessions2.printamount3();
	}
	if ((concessions3.cart1() != 0) || (concessions3.cart2() != 0) || (concessions3.cart3() != 0))
	{
		cout << "\nCoke: ";
		concessions3.printamount1();
		concessions3.printamount2();
		concessions3.printamount3();
	}
	if ((concessions4.cart1() != 0) || (concessions4.cart2() != 0) || (concessions4.cart3() != 0))
	{
		cout << "\nIce cream: ";
		concessions4.printamount1();
		concessions4.printamount2();
		concessions4.printamount3();
	}
	if ((concessions5.cart1() != 0) || (concessions5.cart2() != 0) || (concessions5.cart3() != 0))
	{
		cout << "\nCrispy chicken: ";
		concessions5.printamount1();
		concessions5.printamount2();
		concessions5.printamount3();
	}


	if ((event1.amount() + event2.amount() + concessions1.total() + concessions2.total() + concessions3.total() + concessions4.total() + concessions5.total()) == 0)
	{
		cout << "\nEmpty cart!!!!!" << endl;
	}
	// output the total price
	cout << " \n\nThe total you should pay is $" << event1.amount() + event2.amount() + concessions1.total() + concessions2.total() + concessions3.total() + concessions4.total() + concessions5.total() << endl;

	cout << "Please remember that events are only for a single day; \ntickets cannot be purchased for future events " << endl;
	cout << "Thank you !! see you again!!" << endl;
	cout << " \n\nHave a nice day!!!!!!!!!!! " << endl;




	cin >> i;



	cin.ignore();
	return 0;


}
