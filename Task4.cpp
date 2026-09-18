#include <iostream>
using namespace std;

int main(){
    int students, subjects;

    cout << "Enter the Total Number of Students: \n";
    cin >> students;
    while (students <= 0){
        cout << "Invalid! Cannot be 0 or Less\nTry Again\n";
        cin >> students;
    }

    cout << "Enter the Total Number of Subjects: \n";
    cin >> subjects;
    while (subjects <= 0){
        cout << "Invalid! Cannot be 0 or Less\nTry Again\n";
        cin >> subjects;
    }

    int** marks = new int*[students];

    for(int i = 0; i < students; i++){
        *(marks + i) = new int[subjects];
    }

    for (int i = 0; i < students; i++){
        for(int j = 0; j < subjects; j++){
            cout << "Enter Marks for Student " << i + 1 << " Subject " << j + 1 << ": \n";
            cin >> *(*(marks + i) + j);
        }
    }

    int total;
    int highestTotal = -1;
    int highestStudent;
    for (int i = 0; i < students; i++){
        total = 0;
        cout << "Student " << i + 1 << ": ";
        for(int j = 0; j < subjects; j++){
            cout << marks[i][j] << " ";
            total += marks[i][j];
        }
        cout << "Total Marks: " << total;
        cout << "\n";
        
        if (total > highestTotal){
            highestTotal = total;
            highestStudent = i + 1;
        }
    }
    cout << "Student " << highestStudent << " has the highest total marks: " << highestTotal << "\n";
    
    for(int i = 0; i < students; i++){
        delete[] marks[i];
    }
    delete[] marks;
    marks = nullptr;
    return 0;
}