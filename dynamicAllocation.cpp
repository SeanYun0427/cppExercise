// Dynamic Memory Allocation
// dynamic.cpp

#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    int no;
    float grade[2];
};

double average(double grade1, double grade2){
    return (grade1 + grade2)/2;
}

double topStudent(Student* std, int stdnum){

    double max = average(std[0].grade[0], std[0].grade[1]);

    for(int i = 1; i < stdnum; i++){
        for(int j = 0; j < 1; j++)
        {
            if(max < average(std[i].grade[j], std[i].grade[j+1])){
                max = average(std[i].grade[j], std[i].grade[j+1]);
            }
        }
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
        << " average : " << average(student[i].grade[0], student[i].grade[1]) << endl;
    }

    cout << "The average of the top student's grade : " << topStudent(student, n) << endl;

    delete [] student;
    student = nullptr;


    return 0;
}