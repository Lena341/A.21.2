#include <iostream>
#include <string>
using namespace std;
#pragma once
class Product
{
protected:
	int code;
	float price;
public:
	Product(int c, float prc) : code(c),price(prc) {}
	Product() { code = 0; price = 0; }
	virtual ~Product() {}
	virtual void show() const =0;
};

class Book : public virtual Product
{
private:
	string name;
public:
	Book() { name = "None"; }
	Book(int c, float prc,const string& n) : Product(c,prc),name(n) {}
	virtual void show() const;

};

class Car : virtual public Product
{
private:
	int horse_power;
public:
	Car() { horse_power = 0; }
	Car(int c, float prc, int hrs_pwr) : Product(c,prc), horse_power(hrs_pwr) {}
	virtual void show() const;
};
