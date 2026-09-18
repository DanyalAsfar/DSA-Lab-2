#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of students:\n";
    cin >> n;

    while (n < 1 || n > 10){
        cout << "Invalid! Cannot be 0 or Less or Greater than 10\nTry Again\n";
        cin >> n;
    }

    int *marks = new int[n];

    //input loop
    for (int i = 0; i < n; i++){
        cout << "Enter Marks for Student " << i + 1 << ":\n";
        cin >> *(marks + i);

        //validation
        while (*(marks + i) < 0 || *(marks + i) > 100){
            cout << "Invalid marks, Should be From 0 to 100\nTry Again: \n";
            cin >> (*(marks + i));
        }
    }

    int *extendedMarks = new int[n + 1];
    for (int i = 0; i < n; i++){
        *(extendedMarks + i) = *(marks + i);
    }

    cout << "Enter Marks for New Student:\n";
    cin >> *(extendedMarks + n);

    while (*(extendedMarks + n) < 0 || *(extendedMarks + n) > 100){
        cout << "Invalid marks, Should be From 0 to 100\nTry Again: \n";
        cin >> (*(extendedMarks + n));
    }

    delete[] marks;
    marks = extendedMarks;
    n += 1;

    for (int i = 0; i < n; i++){
        cout << "Marks for Student " << i + 1 << ": " << *(marks + i) << "\n";
    }

    delete[] marks;
    return 0;
}