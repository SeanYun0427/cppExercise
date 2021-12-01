#include <iostream>
#include <string>

using namespace std;

// int _strlen(char* str){
    
//     int len = 0;
//     while(*str != '\0'){
//         len++;
//     }
//     return len;
// }


// int main(){

//     char* str;

//     cout << "What is the input string? ";
//     cin >> str;
//     cout << *str << " has " << _strlen(str) << " characters.";

//     return 0;
// }

int main(){

    string name = "";
    
    cout << "What is the input string? ";
    getline(cin, name);
    cout << name << " has " << name.size() << " characters. " << endl;

    return 0;
}

