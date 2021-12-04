#include <iostream>
#include <string>

using namespace std;

int main(){

    string noun{5, 'A'};
    string verb;
    string adj;
    string adv;
    
    cout << "Enter a noun: ";
    cin >> noun;
    cout << "Enter a verb: ";
    cin >> verb;
    cout << "Enter an adj: ";
    cin >> adj;
    cout << "Enter an adv: ";
    cin >> adv;
    cout << "Do you " << verb << " your " << adj << " " << noun << " " << adv << "?"<< endl;


    return 0;
}