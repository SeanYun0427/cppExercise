#include <iostream> 
using namespace std;

void call_by_val(int a){
    a += 10;
}


void call_by_pointer(int* a)
{
    *a += 10;
}

void call_by_reference(int& c){
    c += 10;
}

int main(void) {
    int a = 10;

    call_by_val(a); 

    cout << a << endl;

    call_by_pointer(&a);
 
    cout << a << endl;

    call_by_reference(a);
 
    cout << a << endl;

    return 0;
}
