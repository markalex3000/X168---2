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
	if (k < -273.15) return -273.15;
	else return k;
}

double ktoc(double k)	//convert Kelvin to Celius
{
	if (k < -273.15) {
		cout << "Nonsense: not kelvins lower than -273.15 \n";
		k = -273.15;
	}
	double c = k - 273.15;
	return c;
}

int main() {
	double temp{ 0.0 };
	double c = 0;
	double k = 0;
	char korc{ ' ' };

	cout << "Enter temperature followed by 'K' or 'C': ";
	cin >> temp;
	cin >> korc;
	if (korc == 'K') cout << temp << " K = " << ktoc(temp) << " degrees Ceclius\n";
	else cout << temp << " C = " << ctok(temp) << " kelvins\n";

	keep_window_open();
	return 0;
}