#include <iostream>

using namespace std;

int leftYears(int ca, int ra){
    return ra - ca;
}

int main(){

    int currentAge = 0;
    int retireAge = 0;
    const int currentYear = 2021;

    cout << "What is your current age? ";
    cin >> currentAge;
    cout << "At what age would you like to retire? ";
    cin >> retireAge;
    cout << "You have " << leftYears(currentAge, retireAge) << " years left until you can retire." << endl;
    cout << "It's " << currentYear << ", so you can retire in " << currentYear + leftYears(currentAge, retireAge) << "." << endl;
    

    return 0;
}