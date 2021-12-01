// 42. Write a language program in C++ which accepts the user's first and last name and 
// print them in reverse order with a space between them. Go to the editor
// Sample Output:
// Print the name in reverse where last name comes first:
// -----------------------------------------------------------
// Input First Name: Alexandra
// Input Last Name: Abramov
// Name in reverse is: Abramov Alexandra

#include <iostream>

using namespace std;


int main(){
    char Fname[30] = {};
    char Lname[30];

    cout << "Input First Name: ";
    cin >> Fname;
    cout << "Input Last Name: ";
    cin >> Lname;
    cout << "Name in reverse is: " << Lname << " " << Fname << endl;


    return 0;
}