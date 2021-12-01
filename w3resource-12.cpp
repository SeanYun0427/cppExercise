// 12. Write a program in C++ to add two numbers accept through keyboard. Go to the editor
// Sample Output:
// Sum of two numbers :
// -------------------------
// Input 1st number : 25
// Input 2nd number : 39
// The sum of the numbers is : 64

#include <iostream>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int a = 0;
    int b = 0;
    cout << "Input 1st number : ";
    cin >> a;
    cout << "Input 2nd number : ";
    cin >> b;

    cout << "The sum of the numbers is : " << sum(a, b) << endl;

    return 0;
}