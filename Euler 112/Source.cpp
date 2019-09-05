#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool isbouncy(int x) {
	string examstr = to_string(x);
	bool increasing = false;
	bool decreasing = false;
	for (int i = 1; i < size(examstr); i++) {
		if (examstr[i] < examstr[i - 1]) {
			decreasing = true;
		}
		if (examstr[i] > examstr[i - 1]) {
			increasing = true;
		}
	}
	return increasing && decreasing;
}

int main() {
	long double counter = 100;
	double total = 0;
	double percentage;
	while (true) {
		counter++;
		if (isbouncy(counter)) {
			total++;
		}
		percentage = (total / counter);
		if (percentage >= 0.99) {
			cout << setprecision(15) << counter;
			break;
		}
	}
}