#include <iostream>
using namespace std;

int main(){
	int sales[5];
	int* p = sales;

	int total = 0;

	//input loop
	for (int i = 0; i < 5; i++){
		cout << "Enter a Non-negative Number: \n";
		cin >> *(p + i);

		while (*(p + i) < 0){
			cout << "Invalid Number, Should be Non-negative\nTry Again: \n";
			cin >> (*(p + i));
		}
	}

	//output loop
	cout << "Value of p Before: " << p << "\n";
	cout << "Array: ";
	for (int i = 0; i < 5; i++){
		total += *(p + i);
		cout << *(p + i) << " ";
	}

	cout << "\nTotal: " << total << "\n";
	cout << "Value of p After: " << p << "\n";

	cout << "After adding 2:\n";
	*(p + 2) += 2; //third day's value is stored after 2 places
	total += 2;

	//output loop for updated values
	for (int i = 0; i < 6; i++){
		cout << *(p + i) << " ";
	}

	cout << "\nTotal: " << total << "\n";
	return 0;
}
