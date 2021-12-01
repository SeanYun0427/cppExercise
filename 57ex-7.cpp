#include <iostream>

using namespace std;

int main(){

    int len = 0;
    int width = 0;

    cout << "What is the length of the room in feet? ";
    cin >> len;
    cout << "What is the width of the room in feet? ";
    cin >> width;
    cout << "You entered dimensions of " << len << " feet by " << width << "feet." << endl;
    cout << "The area is " << endl;
    cout << len * width << "square feet" << endl;
    cout << len * width * 0.09290304 << " square meters" << endl;

    return 0;
}