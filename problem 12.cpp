#include <iostream>
using namespace std;

bool identical(const int* a, int** bptr, int size) {
    const int* b = *bptr;
    for (int i = 0; i < size; i++) {
        if (*(a + i) != *(b + i)) {
            return false;
        }
    }
    return true;
}
int main() {
    int size;
    cin >> size;

    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int* b = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }

    int* bPtr = b;
    bool result = identical(a, &bPtr, size);

    cout << result << endl;
    return 0;
}