#include <iostream>
using namespace std;

int strlen(char* str)
{
    char* first = str;
    while(*str != '\0')
    {
        str++;
    }

    return str - first;
}

int _strncpy(const char * src, char * dest, int n)
{
    int tmp = 0; 
    while(*src != '\0' && tmp++ < n)
    {
        *dest = *src;
        dest++, src++;
    }
    *dest = '\0';
}

struct Student{
    string name;
    int age;

    Student(){
        name = "Hello";
        age = 100;
    }

    Student(string name){
        this->name = name;
        this->age = 0;
    }

    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
};


int main(void)
{
    char* str = "asdfqwer1234!@#$";
    int n = 8;

    char* dest = new char[n];
    cout << strlen(str) << endl;
    cout << strlen(dest) << endl;
    _strncpy(str, dest, 7);

    cout << dest << endl;
    _strncpy(str, dest, 4);

    cout << dest << endl;


    delete [] dest;

    int* array = new int[100];

    for (int i=0; i<100; i++)
    {
        cout << array[i];
    }


    char c; 
    if (c == '\0')
    {
        cout << "NULL!!!";
    }
    else {
        cout << "NOT NULL!!!";
    }

    int* a = new int;
    *a = 1;

    cout << endl << a << endl << *a << endl;
    cout << "*************" << endl;

    Student student0; // === Student student0{};
    
    cout << student0.name << student0.age <<endl;

    Student student{"Sunghwan Cho", 35};

    cout << student.name << student.age <<endl;

    Student student_name{"John Kim"};

    cout << student_name.name << student_name.age <<endl;

    Student* student2 = new Student{"Seungwoo Yoon", 30};

    cout << student2->name << student2->age <<endl;
    student2->name = "Nobu sang";
    student2->age = 29;

    cout << (*student2).name << (*student2).age <<endl;

    Student* students = new Student[10];
    for( int i = 0 ; i < 10 ; i++)
        cout << students[i].name << students[i].age << endl;

    delete [] students;
    return 0;
}
