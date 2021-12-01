#include <iostream>

using namespace std;

struct multiplication_Table{
    int m_num = 0;

};

int table(int number){
    for(int i = 1; i < 10; i++){
         cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main(){
    int num = 0;

    cout << "Enter a number from 2 to 9 : ";
    cin >> num;
    

    if(num >= 2 && num <= 9){
        
        for(int i = 0; i <= num; i++){
            multiplication_Table* tmp = multiplication_Table[8];
            

            delete[] tmp;
            tmp = nullptr;
            
        }
    }

    return 0;
}