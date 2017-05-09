//  Jinhao chen 
// project 2
// U 94977930

#include <iostream>
#include "Events.h"
#include "Concessions.h"
#include <ctime>
#include <vector>
#include <string>
#include "Cart.h"
#include <fstream>

using namespace std;

int main(){
	// ne is number of events, and nc is number of concessions
	int a = 0;
	int b = 0;
	int ne = 2; 
	int nc = 5;
	// The following are thoes for judging what choice user made 
	// for example user input # of items or tickets and y/n
	int x = 0, y = 0, z = 0;
	int i, j, k, l, o, p;
	char q, t;
	int r = 0, s = 0;
	double total = 0.0;
	string tmp;

	// give the information of all events and concessions
	// here is make events' information be empty 
	vector<Events*> movies(ne);
	for (a = 0; a < ne; a++)
	{
		movies[a] = new Events("empty", "empty", "empty", 0, 0.0, 0);
	}
	
	// here is make concessions' information be empty
	vector <Concessions*> clist(nc);

	for (b = 0; b < nc; b++)
	{
		clist[b] = new Concessions("string", "string",  0.0, 0.0, 0.0, 0, 0, 0);
	}
	// here is input the file about event and concesssions
	fstream in;

	in.open("invInput.txt", ios_base::in);

	if (!in.is_open())
		cout << "file not founded" << endl;

	while (in.eof())
	{
		continue;

	}
	int c = 0;
	int d = 0;
	// check if file is end or not, and give each event and concession 
	// information to each vector
	while (!in.eof())
	{
		getline(in, tmp, ',');
		if (tmp == "event")
		{
			string name, information, time;
			int tickets, duration;
			double price;
			string empty;
			getline(in, name, ',');
			getline(in, time, ',');
			getline(in, information, ',');
			in >> tickets;
			in.ignore(256, ',');
			in >> price;
			in.ignore(256, ',');
			in >> duration;
			getline(in, empty);
			movies[c] = new Events(name, time, information, tickets, price, duration);
			c++;
		}
		else if (tmp == "concession"){
			string cname, cdescription;
			double lprice, mprice, sprice;
			int num1, num2, num3;
			string empty;
			getline(in, cname, ',');
			getline(in, cdescription, ',');
			in >> lprice;
			in.ignore(256, ',');
			in >> mprice;
			in.ignore(256, ',');
			in >> sprice;
			in.ignore(256, ',');
			in >> num1;
			in.ignore(256, ',');
			in >> num2;
			in.ignore(256, ',');
			in >> num3;
			getline(in, empty);
			clist[d] = new Concessions(cname, cdescription,  lprice, mprice, sprice,  num1,  num2, num3);
			d++;

		}
	}
	// here to close the file
	in.close();
	// here is define the large cart, medium cart, small cart
	// and then make all value be 0 at first
	vector <Cart*> lcart(5);
	vector <Cart*> mcart(5);
	vector <Cart*> scart(5);

	vector <Cart*> ecart(2);

	ecart[0] = new Cart(0);
	ecart[1] = new Cart(0);

	for (y = 0; y < 5; y++){
		lcart[y] = new Cart(0);
		mcart[y] = new Cart(0);
		scart[y] = new Cart(0);
	}




	// Here is output the  information for user
	cout << "   Hello, welcome to  kiosk inventory." << endl;
	cout << "\n 1. Events \n 2. Concessions \n Any numbers to next step" << endl;
	cin >> q;
	while (( q== '1') || ( q == '2'))
	{
		// here 1 is print event's information
		// 2 is print concession's informaiton 
		if (q == '1')
		{

			for (int j = 0; j < 2; j++)
			{
				cout << "Name: \"" << movies.at(j)->Getename() << "\" Time: \" " << movies.at(j)->Getetime() << "\" Description: \"" << movies.at(j)->Getedecsription() << "\" Tickets: \" ";
				cout << movies.at(j)->Getseats() << "\" Price: \" $" << movies.at(j)->Getevensprice() << "\" Duration: \" " << movies.at(j)->Getevenduration() <<" minutes\"" << endl;
			}
		}
		else if ( q == '2')
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "Name: \" " << clist.at(i)->Getcname() << " \" Description: \" " << clist.at(i)->Getcdescription() << "\" \nLarge Price: \" $";
				cout << clist.at(i)->Getlprice() << "\" Medium Price: \" $" << clist.at(i)->Getmprice() << "\" Small Price: \" $" << clist.at(i)->Getsprice() << "\" \nLarge Number: \" ";
				cout << clist.at(i)->Getnum1() << "\" Medium Number: \" " << clist.at(i)->Getnum2() << "\" Small Number: \" " << clist.at(i)->Getnum3() << "\" " << endl;
			}
		}
		cout << "\n Would you like to see other informations? " << endl;
		cout << "\n\n 1. Events \n 2. Concessions \n Any numbers to next step" << endl;
		cin >> q;
		
	}

	r = 0;
	x = 0;
	y = 0;
	z = 0;
	// check if user want to add or remove item
	cout << "\n Would you want to add or remove anything to your cart? ";
	cout << " \n\n 1. ADD \n 2. Remove \n Other number to check out" << endl;
	cin >> q;
	while ((q == '1') || (q == '2'))
	{
		// user input 1 is want to add items, 2 is to remove items
		if (q == '1')
		{
			cout << "Which one you want to ADD";
			cout << "\n\n 1. Event \n 2. concession \n other numbers means NO" << endl;
			cin >> k;
			while ((k == 1) || (k == 2)){
				if (k == 1)
				{
					cout << "which one you want? 1." << movies.at(0)->Getename() << " 2. " << movies.at(1)->Getename() << endl;
					cin >> l;
					l = l - 1;

					for (int i = 0; i < 2; i++){
						//here check i == l means which one is user want, when i equal to user's input
						// it means take this and run the following code
						if (i == l){
							int j = 0;
							cout << "How much you want?   " << movies.at(i)->Getseats() << " left" << endl;
							cin >> j;
							movies.at(i)->checkseats(j);
							r = movies.at(i)->cart();
							ecart[i] = new Cart(r);

						}
					}
				}
				else if (k == 2)
				{
					cout << "which one you want?  ";
					for (i = 0; i < 5; i++)
					{
						cout << " "<< i + 1 << "." << clist.at(i)->Getcname();
					}
					cout << endl;
					cin >> l;
					l = l - 1;
					for (int i = 0; i < 5; i++){
						//here check i == l means which one is user want, when i equal to user's input
						// it means take this and run the following code
						if (i == l){
							cout << "Which size you want? 1.Large 2.medium 3.small ?" << endl;
							cin >> o;
							if (o == 1){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->Getnum1() << " left" << endl;
								cin >> j;
								clist.at(i)->checkNum1(j);
								x = clist.at(i)->cart1();
								lcart[i] = new Cart(x);
								
							}
							if (o == 2){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->Getnum2() << " left" << endl;
								cin >> j;
								clist.at(i)->checkNum2(j);
								x = clist.at(i)->cart2();
								mcart[i] = new Cart(x);

							}
							if (o == 3){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->Getnum3() << " left" << endl;
								cin >> j;
								clist.at(i)->checkNum3(j);
								x = clist.at(i)->cart3();
								scart[i] = new Cart(x);

							}
						}
					}

				}
				cout << "\n  Add more?" << endl;
				cout << "\n 1. Event \n 2. concession \n other number means NO" << endl;
				cin >> k;
			}
		}
		else if (q == '2')
		{
			cout << "Which one you want to Remove";
			cout << "\n\n 1. Event \n 2. concession" << endl;
			cin >> k;
			while ((k == 1) || (k == 2)){
				if (k == 1)
				{
					cout << "which one you want? 1." << movies.at(0)->Getename() << " 2. " << movies.at(1)->Getename() << endl;
					cin >> l;
					l = l - 1;
					for (int i = 0; i < 2; i++){
						if (i == l){
							int j = 0;
							cout << "How much you want?   " << movies.at(i)->cart() << " in your cart" << endl;
							cin >> j;
							movies.at(i)->reduce(j);
							r = movies.at(i)->cart();
							ecart[i] = new Cart(r);

						}
					}

				}
				else if (k == 2)
				{
					cout << "which one you want to remove? ";
					for (i = 0; i < 5; i++)
					{
						cout << " " << i + 1 << "." << clist.at(i)->Getcname();
					}
					cout << endl;
					cin >> l;
					l = l - 1;
					for (int i = 0; i < 5; i++){
						if (i == l){
							cout << "Which size you want to remove? 1.Large 2.medium 3.small ?" << endl;
							cin >> o;
							if (o == 1){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->cart1() << " in your cart" << endl;
								cin >> j;
								clist.at(i)->reduce1(j);
								x = clist.at(i)->cart1();
								lcart[i] = new Cart(x);

							}
							if (o == 2){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->cart2() << " in your cart" << endl;
								cin >> j;
								clist.at(i)->reduce2(j);
								x = clist.at(i)->cart2();
								mcart[i] = new Cart(x);

							}
							if (o == 3){
								int j = 0;
								cout << "How much you want? " << clist.at(i)->cart3() << " in your cart" << endl;
								cin >> j;
								clist.at(i)->reduce3(j);
								x = clist.at(i)->cart3();
								scart[i] = new Cart(x);

							}
						}
					}
				}
				cout << " Anything you want to remove? " << endl;
				cout << "\n\n 1. Event \n 2. concession \n other number means No" << endl;
				cin >> k;
			}
		}
		cout << " Would you want to see your cart? y/n " << endl;
		cin >> t;
		if (t == 'y')
		{
			cout << "Now you have " << endl;
			for (int o = 0; o < 2; o++)
			{
				if (ecart.at(o)->Getn1() != 0)
				{
					cout << "\"" << movies.at(o)->Getename() << "\" " << movies.at(o)->cart() << " Tickets" << endl;
				}
			}
			for (int p = 0; p < 5; p++){
				if ((lcart.at(p)->Getn1() != 0) || (mcart.at(p)->Getn1() != 0) || (scart.at(p)->Getn1() != 0))
				{
					cout << "\"" << clist.at(p)->Getcname()<< "\"";
					clist.at(p)->print1();
					clist.at(p)->print2();
					clist.at(p)->print3();
					cout << endl;
				}
			}
		}
		cout << " Would you want to add or remove anything to your cart? ";
		cout << " \n\n 1. ADD \n 2. Remove \n other number to Check out" << endl;
		cin >> q;
		if (( q != '1')&&( q != '2'))
		{
			break;
		}
	}
	cout << "Now you have " << endl;
	for (int o = 0; o < 2; o++)
	{
		if (ecart.at(o)->Getn1() != 0)
		{
			cout << "\"" << movies.at(o)->Getename() << "\" " << movies.at(o)->cart() << " Tickets" << endl;
		}
	}
	for (int p = 0; p < 5; p++){
		if ((lcart.at(p)->Getn1() != 0) || (mcart.at(p)->Getn1() != 0) || (scart.at(p)->Getn1() != 0))
		{
			cout << "\"" << clist.at(p)->Getcname() << "\"";
			clist.at(p)->print1();
			clist.at(p)->print2();
			clist.at(p)->print3();
			cout << endl;
		}
	}
	// calculate the total prices
	for (int i = 0; i < 2; i++)
	{
		total = total + movies.at(i)->amount();
	}
	for (int i = 0; i < 5; i++)
	{
		total = total + clist.at(i)->total();
	}
	if (total == 0){
		cout << " empty cart!!!" << endl;
	}

	cout << "Now you should pay $" << total << endl;
	cout << " \nThank you for using kiosk inventory." << endl;
	cout << " Have a nice day!!! and welcome next time!!" << endl;
	
	// delete the each information after create the 'new' statement
	for (int i = 0; i < ne; i++)
	{
		delete movies[i];
		delete ecart[i];
	}
	for (int i = 0; i < nc; i++)
	{
		delete clist[i];
		delete lcart[i];
		delete mcart[i];
		delete scart[i];
	}

	cin >> q;



	cin.ignore();
	return 0;


}