#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double square = 0;

    cout << "How much square do you want to cover? ";
    cin >> square;

    cout << "You will need to purchase " << ceil(square/350) << " gallons of" << "\n"
    << "paint to cover " << square << " square feet." << endl;


    return 0;
}