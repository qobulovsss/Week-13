#include <iostream>
using namespace std;
void avg(const double* arr, int size, double* result) {
double sum = 0.0;
const double* ptr = arr;
for (int i = 0; i < size; i++) {
    sum += *ptr;
    ptr++;
}
    *result = sum / size;
}
int main() {
int size;
cout << "Enter the size of numbers: ";
cin >> size;
double* arr = new double[size];

    cout << "Enter " << size << " numbers: ";
for (int i = 0; i < size; i++) cin >> arr[i];
double result;
avg(arr, size, &result);
cout << "Average: " << result << endl;
delete[] arr;
return 0;
}