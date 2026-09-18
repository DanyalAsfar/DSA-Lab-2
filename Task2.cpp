#include <iostream>;
using namespace std;

int main(){
	int numberOfStudents; //number of students = size of array

	cout << "Enter the Total Number of Students: \n";
	cin >> numberOfStudents;

	//validation
	while (numberOfStudents <= 0){
		cout << "Invalid! Cannot be 0 or Less\nTry Again\n";
		cin >> numberOfStudents;
	}

	int *marks = new int[numberOfStudents];

	//input loop
	for (int i = 0; i < numberOfStudents; i++){
		cout << "Enter Marks: \n";
		cin >> *(marks + i);

		while (*(marks + i) < 0 || *(marks + i) > 100){
			cout << "Invalid marks, Should be From 0 to 100\nTry Again: \n";
			cin >> (*(marks + i));
		}

	}

	int total = 0;
	int count = 0;
	cout << "\nMarks: ";
	for (int i = 0; i < numberOfStudents; i++){
		cout << *(marks + i) << " ";
		total += *(marks + i);

		if (*(marks + i) >= 50)
			count++;
	}

	cout << "\nTotal Marks: " << total << "\n";
	cout << "Average: " << (float) total / numberOfStudents;
	cout << "\nNumber of Students with Marks >= 50: " << count << "\n";

	delete[] marks;
	marks = nullptr;

	return 0;
}
