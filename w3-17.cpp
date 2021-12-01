// 17. Write a program in C++ to find the Area and Perimeter of a Rectangle. Go to the editor
// Sample Output:
// Find the Area and Perimeter of a Rectangle :
// -------------------------------------------------
// Input the length of the rectangle : 10
// Input the width of the rectangle : 15
// The area of the rectangle is : 150
// The perimeter of the rectangle is : 50

#include <iostream>

using namespace std;

int rectangleArea(int a, int b){
    return a * b;
}
int rectanglePerimeter(int a, int b){
    return a*2 + b*2;
}

int main(){
    int a = 0;
    int b = 0;

    cout << "Input the length of the rectangle : ";
    cin >> a;
    cout << "Input the width of the rectangle : ";
    cin >> b;
    cout << "The area of the rectangle is : " << rectangleArea(a, b) << endl;
    cout << "The perimeter of the rectangle is : " << rectanglePerimeter(a, b) << endl;


    return 0;
}