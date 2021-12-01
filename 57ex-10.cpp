#include <iostream>

using namespace std;

struct Item{

    double m_price = 0.0;
    int m_quantity = 0;

};

double subTotal(Item* item, int itemNum){
    
    double total = 0.0;

    for(int i = 0; i < itemNum; i++){
        total += item[i].m_price*item[i].m_quantity;
    }


    return total;
}


int main(){

    int itemNum = 0;
    double tax = 0.055;

    cout << "How many items did you get? ";
    cin >> itemNum;
    Item* item = new Item[itemNum];
    
    for(int i = 1; i <= itemNum; i++){
        cout << "Enter the price of item " << i << ": ";
        cin >> item[i-1].m_price;
        cout << "Enter the quantity of item " << i << ": ";
        cin >> item[i-1].m_quantity;
    }
    

    cout << "Subtotal: $" << subTotal(item, itemNum) << endl;
    cout << "Tax: $" << subTotal(item, itemNum) * tax << endl;
    cout << "Total: $" << subTotal(item, itemNum) + (subTotal(item, itemNum) * tax) << endl;

    delete[] item;
    item = nullptr;

    return 0;
}