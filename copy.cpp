#include <iostream>
using namespace std;


class Teacher {
    private:
        int no;
    public:
        Teacher(int _no){
            no = _no;
        }
        void set(int _no)
        {
            no = _no;
        }
        void display(){
            cout << "Teacher number is " << no << endl;
        }
};

class Student {
    private:
        int no;
        int no2;
        //Teacher* teacher; 
    public:
        Student(){
            cout << "Default constructor" << endl;
            set(0);
            //this->set(0);
            //(*this).set(0);
            //teacher = new Teacher(0);
        }

        Student(int no){
            set(no);
            //teacher = new Teacher(0);
        }

        ~Student(){
            cout << "Destructor called." << endl;
            //delete teacher;
        }
        
        void set(int _no)
        {
            no = _no;
        }

        Student set_no1(int _no){
            this->no = _no;
            return *this;
        }
        Student& set_no2(int _no2){
            this->no2 = _no2;
            return *this;
        }

        void copy_from(Student& src){
            no = src.no;
        }

        /*void copy_from_teacher(Teacher& src){
            no = src.no;
        }*/

        void display(){
            if (no == 0) 
                cout << "Invalid Student" << endl;
            else
                cout << "Student number is " << no << " no2 " << no2<< endl;
            //teacher->display();
        }
        operator bool() const{
            return (no != 0);
        }
        bool is_valid() const {
            return (no != 0);
        }
};


void create() {
    Student invalid_std;
    if (!invalid_std.is_valid()){
        cout << "Invalid std" << endl;
    }


    Student a{10};
    a.display();

    /*

    Student a{100, 100, 100, 100, 100, 100, 100, "stering", "ASdfsdf"}
    
    StudentBuilder builder;

    Student std1 = builder.no1(100).no2(100).no3(100).name("stering").school("asdfqwer").build();


    a.set_no1(100).set_no2(200);
    a.display();
    //a.set(10);
    //Student a{10};
    //a.display();
    //a.set(10);
    

    // Student b{1000};
    // b.display();

    //b.copy_from(a);
    //b.display();
    */

/*
    Teacher t;
    t.set(100);
    b.copy_from_teacher(t);
    b.display();
*/
    cout << "Helo" << endl;
    
}


int main() {
    create();
    return 0;
}