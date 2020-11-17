#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

void Product::show() const
{
	cout << code  << price ;
}

void Book::show() const
{
	Product::show();
	cout <<  name;
}

void Car::show() const
{
	Product::show();
	cout <<  horse_power;
}

int main()
{
	Book b(1, 2, "pub");
	Car c(4, 5, 6);
	Product& p1 = b;
	Product& p2 = c;
	p1.show();
	p2.show();
	return 0;
}