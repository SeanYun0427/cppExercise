// 13. Write a program in C++ to swap two numbers. Go to the editor
// Sample Output:
// Swap two numbers :
// -----------------------
// Input 1st number : 25
// Input 2nd number : 39
// After swapping the 1st number is : 39
// After swapping the 2nd number is : 25

#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;

}

int main(){
    int a = 0;
    int b = 0;

    cout << "Input 1st number : ";
    cin >> a;
    cout << "Input 2nd number : ";
    cin >> b;


    swap(a,b);

    cout << "After swapping the 1st number is : " << a << endl;
    cout << "After swapping the 2nd number is : " << b <<;




    return 0;
}