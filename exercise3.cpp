#include <iostream>

using namespace std;

int ageYears(){
    
}

int ageMonth(){

}

int main(){

    int a, b, c, d, e, f;

    cout << "Enter the current year." << endl;
    cin >> a;
	cout << "Enter the current month (a number from 1 to 12)." << endl;
    cin >> b;
	cout << "Enter your current age in years." << endl;
    cin >> c;
	cout << "Enter the month in which you were born (a number from 1 to 12)." << endl;
    cin >> d;
	cout << "Enter the year for which you wish to know your age." << endl;
    cin >> e;
	cout << "Enter the month in this year." << endl;
    cin >> f;

    cout << "Your age in " << e << "/" << f << ": " << ageYears(a, e) << " years and " << ageMonth(b, f) << " month." << endl;

    return 0;
}