#include <iostream>
using namespace std;

int main(){
	int sales[2][3];
	int(*rowPtr)[3] = sales;

	for (int r = 0; r < 2; r++){
		cout << "Branch " << r + 1 << ":\n";
		for (int c = 0; c < 3; c++){
			cout << "Enter Day Sale: \n";
			cin >> *(*(rowPtr + r) + c);
		}
		cout << "\n";
	}

	int branchTotal;
	for (int r = 0; r < 2; r++){
		cout << "Branch " << r + 1 << ": ";
		branchTotal = 0; // reset to 0 for each branch

		for (int c = 0; c < 3; c++){
			cout << *(*(rowPtr + r) + c) << " ";
			branchTotal += *(*(rowPtr + r) + c);
		}
		cout << "Branch Total: " << branchTotal << "\n";
	}

	int dayTotal;
	for (int c = 0; c < 3; c++){
		dayTotal = 0;
		for (int r = 0; r < 2; r++){
			dayTotal += *(*(rowPtr + r) + c);
		}
		cout << "Total for Day " << c + 1 << " :" << dayTotal << "\n";
	}

	return 0;
}
