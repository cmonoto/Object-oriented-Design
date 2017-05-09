#include <iostream>
#include <stdlib.h>
#include "Concessions.h"
// these functions are for get information about concessions
Concessions::Concessions(string cname, string cdescription, string csize, double lprice,double mprice, double sprice, int num1, int num2, int num3){
	name = cname;
	description = cdescription;
	size = csize;
	pricel = lprice;
	pricem = mprice;
	prices = sprice;
	number1 = num1;
	number2 = num2;
	number3 = num3;
}
string Concessions::Getcname(){
	return name;
}
string Concessions::Getcdescription(){
	return description;
}
string Concessions::Getcsize(){
	return size;
}
double Concessions::Getlprice(){
	return pricel;
}
double Concessions::Getmprice(){
	return pricem;
}
double Concessions::Getsprice(){
	return prices;
}
int Concessions::Getnum1(){
	return number1;
}
int Concessions::Getnum2(){
	return number2;
}

int Concessions::Getnum3(){
	return number3;
}
// this is for check when user make orders, if number enough or not  Num1 is for large and 
// Num2 for medium and Num3 for small.
int Concessions::checkNum1(int n1 = 0){
	while (number1 < n1)
	{
		cout << "The number of items are not enough, Please try again" << endl;
		cin >> n1;
	}
	larNum = larNum + n1;
	number1 = number1 - n1;
	return n1;
}
int Concessions::checkNum2(int n2 = 0){
	while (number2 < n2)
	{
		cout << "The number of items are not enough, Please try again" << endl;
		cin >> n2;
	}
	midNum = midNum +n2;
	number2 = number2 - n2;
	return n2;
}
int Concessions::checkNum3(int n3 = 0){
	while (number3 < n3)
	{
		cout << "The number of items are not enough, Please try again" << endl;
		cin >> n3;
	}
	smaNum = smaNum + n3;
	number3 = number3 - n3;
	return n3;
}
// cart1 cart2 cart3 are for check each items how many user has now.
int Concessions::cart1(){
	return larNum;
}
int Concessions::cart2(){
	return midNum;
}
int Concessions::cart3(){
	return smaNum;
}
// this is for check when user want to remove the items from cart, and
// check if number enough or not.
int Concessions::reduce1(int rm1){
	while (larNum < rm1){
		cout << "\n Error, you just order " << larNum << " large item! Please try again!!" << endl;
		cin >> rm1;
	}
	larNum = larNum - rm1;
	number1 = number1 + rm1;
	return rm1;
}
int Concessions::reduce2(int rm2){
	while (midNum < rm2){
		cout << "\n Error, you just order " << midNum << " medium item! Please try again!!" << endl;
		cin >> rm2;
	}
	midNum = midNum - rm2;
	number2 = number2 + rm2;
	return rm2;
}
int Concessions::reduce3(int rm3){
	while (smaNum < rm3){
		cout << "\n Error, you just order " << smaNum << " small item! Please try again!!" << endl;
		cin >> rm3;
	}
	smaNum = smaNum - rm3;
	number3 = number3 + rm3;
	return rm3;
}
// give the prices of orders
double Concessions::amount1(){
	return larNum * pricel;
}
double Concessions::amount2(){
	return midNum * pricem;
}
double Concessions::amount3(){
	return smaNum * prices;
}
// give the total prices
double Concessions::total(){
	return larNum* pricel + midNum * pricem + smaNum * prices;
}
// print function is for check if any in cart and print how many in cart.
void Concessions::print1(){
	if (larNum != 0){
		cout << larNum << " large ";
	}
}
void Concessions::print2(){
	if (midNum != 0){
		cout << midNum << " medium ";
	}
}
void Concessions::print3(){
	if (smaNum != 0){
		cout << smaNum << " small ";
	}
}
void Concessions::printamount1(){
	if (larNum != 0)
		cout << " large $" << larNum * pricel;
}
void Concessions::printamount2(){
	if (midNum != 0)
		cout <<  " medium $" << midNum * pricem;
}
void Concessions::printamount3(){
	if (smaNum != 0)
		cout << " small $" << smaNum * prices;
}