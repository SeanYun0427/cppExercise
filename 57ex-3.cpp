#include <iostream>
#include <string>

using namespace std;

int main(){

    string quote = "";
    string name = "";

    cout << "What is the quote? ";
    getline(cin, quote);
    cout << "Who said it? ";
    getline(cin, name);
    cout << name << " says, " << "\"" << quote << "\"" << endl;



    return 0;
}