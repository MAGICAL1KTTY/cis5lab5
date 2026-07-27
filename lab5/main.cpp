#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

struct Businesscard
{
	string name;
	string address;
	string number;
	string workingHours;
	string poc;
	double price;

	Businesscard(const string& n, const string& a, const string &num, const string& wh, const string& po, double p)
		: name(n), address(a), number(num), workingHours(wh), poc(po), price(p) {}
};

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	double pr1 = rand() % 501 + 100;
	double pr2 = rand() % 501 + 100;
	double pr3 = rand() % 501 + 100;
	double pr4 = rand() % 501 + 100;
	double pr5 = rand() % 501 + 100;

	//initializing all 5 businesses
	Businesscard b1("Gaggle", "11830 Gaggle Av.", "90901832095", "8 AM to 5 PM Monday-Thrusday", "Gaggle Customer Service", pr1);
	Businesscard b2("Pear", "78201 Par St.", "9213481092", "7 AM to 4 PM Sunday-Friday", "Pear Customer Service", pr2);
	Businesscard b3("AnotherOne", "78491 Uno Dr.", "8902841000", "6:30 AM to 9 PM Monday-Friday", "AnotherOne Customer Service", pr3);
	Businesscard b4("LoofAh", "90281 Tickle St.", "7824980999", "10 AM-10 PM Monday-Friday", "LoofAh Customer Service", pr4);
	Businesscard b5("TungstenCube", "83742 Giggle Dr.", "9742471092", "9 AM to 6 PM Monday-Thursday", "TungstenCube Customer Service", pr5);

	//finding the best price among the five
	Businesscard cards[] = { b1,b2, b3, b4, b5 };
	Businesscard bestChoice = b1;
	for (int k = 0; k < 5; ++k)
	{
		cout << "The price of " << cards[k].name << " is $" << cards[k].price << endl;
		if (cards[k].price < bestChoice.price) {
			bestChoice = cards[k];
		}
	}

	// prints out the best choice
	cout << endl;
	cout << "The best option is " << bestChoice.name << " located on " << bestChoice.address << " Their work hours are " << bestChoice.workingHours << ", and you can contact them through " << bestChoice.number << " or " << bestChoice.poc << ". Their price is $" << bestChoice.price << endl;

	
}