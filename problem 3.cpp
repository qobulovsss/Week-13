#include <iostream>
using namespace std;
int countValid(int* arr, int size) {
int count = 0;
int** ptr = (int**)arr;
for (int i = 0; i < size; i++) {
   if (*(ptr + i) != nullptr) {
      count++;
   }
}
   return count;
}
int main() {
int size;
cin >> size;
int** ptrArr = new int*[size];
for (int i = 0; i < size; i++) {
   char input[10];
   cin >> input;
   if (input[0] == '-') {
      ptrArr[i] = nullptr;
   } else {
      int value = stoi(input);
      ptrArr[i] = new int(value);
   }
}
int validCount = countValid((int*)ptrArr, size);
cout << validCount << endl;
for (int i = 0; i < size; i++) {
if (ptrArr[i] != nullptr) {
delete ptrArr[i];
}
}
delete[] ptrArr;
return 0;
}