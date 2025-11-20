#include <iostream>
using namespace std;
void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
const int* ptr1 = a;
const int* ptr2 = b;
int* result = out;
while (ptr1 < a + n && ptr2 < b + m) {
    if (*ptr1 < *ptr2) {
        *result = *ptr1;
        ptr1++;
    } else {
        *result = *ptr2;
        ptr2++;
    }
    result++;
}
while (ptr1 < a + n) {
    *result = *ptr1;
    result++;
    ptr1++;
}
while (ptr2 < b + m) {
    *result = *ptr2;
    result++;
    ptr2++;
}
}

int main() {
int n, m;
cout << "Enter size of the first array: ";
cin >> n;
int* a = new int[n];
cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++) cin >> a[i];
cout << "Enter size of the second array: ";
cin >> m;
int* b = new int[m];
cout << "Enter " << m << " elements: ";
for (int i = 0; i < m; i++) cin >> b[i];
int* out  = new int[n + m];
mergeSorted(a, n, b, m, out);
cout << "Merge Sorted Array: ";

    for (int i = 0; i < n + m; i++) cout << out[i] << " ";
    cout << endl;
    return 0;
}