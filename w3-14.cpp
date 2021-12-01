// 14. Write a program in C++ to calculate the volume of a sphere. Go to the editor
// Sample Output:
// Calculate the volume of a sphere :
// ---------------------------------------
// Input the radius of a sphere : 6
// The volume of a sphere is : 904.32

#include <iostream>

using namespace std;

double volOfSphere(int a){
    return 3.14 * (a * a * a) * 4 / 3;
}

int main(){
    int a;
    cout << "Input the radius of a sphere : ";
    cin >> a;
    cout << "The volume of a sphere is : " << volOfSphere(a) << endl;


    return 0;
}