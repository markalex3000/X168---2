// X168 - 2

// Start standard opening - additional work

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

// End standard opening

double ctok(double c)	//convert Celcius to Kelvin
{
	double k = c + 273.15;
	return k;
}

int main() {
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';
	keep_window_open();
	return 0;
}