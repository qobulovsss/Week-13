#include <iostream>
using namespace std;
void fixNeg(int *arr, int size) {
int* ptr = arr;
int* end = arr + size;
while (ptr < end) {
    if (*ptr < 0) {
        *ptr = 0;
    }
    ptr++;
}
}
int main() {
int size;
cin >> size;
int *arr = new int[size];
int *ptr = arr;
for (int i = 0; i < size; i++) cin >> *(ptr + i);
fixNeg(arr, size);
ptr = arr;
for (int i = 0; i < size; i++) {
cout << *(ptr + i) << " ";
}
cout << endl;
delete[] arr;
return 0;
}