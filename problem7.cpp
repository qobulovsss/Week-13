#include <iostream>

using namespace std;
int* findMax(int* arr, int size){
if (size <= 0) return nullptr;
int* maxPtr = arr;
for (int* ptr = arr + 1; ptr < arr + size; ptr++) {
    if (*ptr > *maxPtr) {
        maxPtr =ptr;
    }
}
return maxPtr;
}
int main() {
int size;
cin >> size;
int arr[size];
for (int i = 0; i < size; i++) {
    cin >> arr[i];
}
int* maxPtr = findMax(arr, size);
if (maxPtr != nullptr) {
    cout << *maxPtr << endl;
}
else {
    cout << "there is no max" << endl;
}
return 0;
}