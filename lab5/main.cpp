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

void output (string& x)
{ // should output everything to screen with reference to name of instance; argument will override the parameter when ran
	cout << "Business Name: " << x.name << endl;
	cout "Address: " << x.address
	cout "Phone Number: " << x.number << endl;
	cout << "Working hours: " << x.workingHours << endl;
	cout << "Point of contact: " << x.poc << endl;
	cout << "Price: " << x.p
}

//create a function that compares all five values, reference previous labs

int main () 
{ //initializing all 5 businesses
	Businesscard b1 ("Gaggle," "11830 Gaggle Av.", 90901832095, "8 AM to 5 PM Monday-Thrusday", "Gaggle Customer Service", srand(p)); 
	Businesscard b2 ("Pear", "78201 Par St.", 9213481092, "7 AM to 4 PM Sunday-Friday", "Pear Customer Service", srand(p)); 
	Businesscard b3 ("AnotherOne", "78491 Uno Dr.", 8902841000,"6:30 AM to 9 PM Monday-Friday", "AnotherOne Customer", srand(p));
	Businesscard b4 ("LoofAh", "90281 Tickle St.", 7824980999, "10 AM-10 PM Monday-Friday", "LoofAh Customer Service");
	Businesscard b5 ("TungstenCube", "83742 Giggle Dr.", 9742471092, "9 AM to 6 PM Monday-Thursday", "TungstenCube Customer Service", srand(p));

// call output
// call comparison function
// output which business is the cheapest
}
