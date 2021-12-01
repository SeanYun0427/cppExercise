#include <iostream>

using namespace std;

// struct Multiplication_Table{
//     int m_num = 0;


// };

    void table(int number){
    for(int i = 1; i < 10; i++){
         cout << number << " x " << i << " = " << number * i << endl;
    }
}


int main(){
    int num = 0;

    cout << "Enter a number from 2 to 9 : ";
    cin >> num;
    //Multiplication_Table* tmp = new Multiplication_Table[num];

    if(num >= 2 && num <= 9){

        for(int i = 2; i <= num; i++){        
            table(i);
        }
    }

    //delete[] tmp;
    //tmp = nullptr;

    return 0;
}