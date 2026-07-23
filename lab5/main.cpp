#include <iostream>
#include <cstdlib>

using namespace std;

//company name - Gaggle, Pear, AnotherOne, LoofAh, & TungstenCube
//company address
//phone number - 90901832095, 9213481092, 8902841000, 7824980999, 
//company working hours - 
//representative poc(point of contact) - Gaggle Customer Service, Pear Customer Service, AnotherOne Customer Service, LoofAh Customer Service, TungstenCube Customer Service
//price quoted

struct Businesscard
{ 
	string name;
	int address;
	int number;
	int workingHours;
	string poc;
	double price;

	Businesscard(const string &n, int a, int num, int wh, string &po, double p)
		: name(n), address(a), number(num), workingHours(wh), poc(po), price(p) {}
};

