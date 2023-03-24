#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, reversed_str = "";
    cout << "Digite uma string: ";
    getline(cin, str);

    // Inverte a string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }

    cout << "String invertida: " << reversed_str << endl;
    return 0;
}
