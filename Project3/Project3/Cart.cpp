#include <iostream>
#include "Cart.h"


// the cart class is for when user each time order and assign those num
// to cart, event has ecart, and concession has three cart, lcart, mcart ,s cart
// which is about large number and medium number and small number
Cart::Cart(int num1){
	n1 = num1;
}
int Cart::Getn1(){
	return n1;
}
