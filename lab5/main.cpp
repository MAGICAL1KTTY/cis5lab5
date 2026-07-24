#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//company name - Gaggle, Pear, AnotherOne, LoofAh, & TungstenCube
//company addresses
// 11830 Gaggle Av.
// 78201 Par St.
// 78491 Uno Dr.
// 90281 Tickle St.
// 83742 Giggle Dr.
//phone number - 90901832095, 9213481092, 8902841000, 7824980999, 
//company working hours
// 8 AM to 5 PM Monday-Thrusday
// 7 AM to 4 PM Sunday-Friday
// 6:30 AM to 9 PM Monday-Friday
// 10 AM-10 PM Monday-Friday
// 9 AM to 6 PM Monday-Thursday
//representative poc(point of contact) - Gaggle Customer Service, Pear Customer Service, AnotherOne Customer Service, LoofAh Customer Service, TungstenCube Customer Service
//price quoted - use rand in 

struct Businesscard
{ 
	string name;
	int address;
	int number;
	int workingHours;
	string poc;
	double price;

	Businesscard(const string &n, string &a, int num, string &wh, string &po, double p)
		: name(n), address(a), number(num), workingHours(wh), poc(po), price(p) {}
};

int main ()
{
	Businesscard b1 ("Gaggle," "11830 Gaggle Av.", 90901832095, "8 AM to 5 PM Monday-Thrusday", "Gaggle Customer Service", srand(p)); 


}
