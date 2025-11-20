#include <iostream>
using namespace std;
void printIfValid(int* p) {
if (p == nullptr) {
    cout << "NULL";
} else {
    cout << *p;
}
}
int main() {
    string input1, input2;
    cin >> input1 >> input2;
    if (input1 == "n") {
        printIfValid(nullptr);
    } else {
        int num1 = stoi(input1);
        printIfValid(&num1);
    }

    cout << ", ";
    if (input2 == "n") {
        printIfValid(nullptr);
    } else {
        int num2 = stoi(input2);
        printIfValid(&num2);
    }

    return 0;
}