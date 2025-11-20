#include <iostream>
using namespace std;
int removeValue(int* arr, int size, int val) {
    int* write = arr;
    int* read = arr;
    for (int i = 0; i < size; i++) {
        if (*read != val) {
            *write = *read;
            write++;
        }
        read++;
    }
    return write - arr;
}

int main() {
int a;
cin >> a;
int arr[a];
for (int i = 0; i < a; i++) cin >> arr[i];
int val;
cin >> val;

    int newSize = removeValue(arr, a, val);
for (int i = 0; i < newSize; i++) cout << arr[i] << (i == newSize - 1 ? " " : " ");
    return 0;
}