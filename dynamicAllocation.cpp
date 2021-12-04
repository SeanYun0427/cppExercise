// Dynamic Memory Allocation
// dynamic.cpp

#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    int no;
    float grade[2];
};

double average(Student* std){
    return (std->grade[0] + std->grade[1])/2;
}

double topStudent(Student* std, int stdnum){
    double max = average(std[0].grade[0], std[0].grade[1]);

    for(int i = 1; i < stdnum; i++){
        if(max < average(std[i].grade[0], std[i].grade[1]))
            max = average(std[i].grade[0], std[i].grade[1]);
    }
    return max;
}

int main(){
    int n;
    Student* student = nullptr;

    cout << "Enter the number of students : ";
    cin >> n;
    student = new Student[n];

    for(int i = 0; i < n; i++){
        cout << "Student Number : ";
        cin >> student[i].no;
        cout << "Student Grade 1 : ";
        cin >> student[i].grade[0];
        cout << "Student Grade 2 : ";
        cin >> student[i].grade[1];
    }

    for (int i = 0; i < n; i++){
        cout << student[i].no << ": " << student[i].grade[0] << ", " << student[i].grade[1] 
        << " average : " << average(student) << endl;
    }

    cout << "The average of the top student's grade : " << topStudent(student, n) << endl;

    delete [] student;
    student = nullptr;


    return 0;
}