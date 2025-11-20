#include <iostream>
using namespace std;
int sum2D(int**m, int r, int c) {
int sum = 0;
for (int i = 0; i < r; i++) {
int* row = *(m + i);
for (int j = 0; j < c; j++) {
    sum += *(row + j);
}
}
    return sum;
}
int main() {
int r, c;
cout << "Enter rows and columns of matrix: ";
cin >> r >> c;
int totalNumbers = r * c;
cout << "You need to enter " << totalNumbers << " numbers." << endl;
int** ann = new int*[r];
for (int i = 0; i < r; i++) {
    ann[i] = new int[c];
}
cout << "Enter matrix elements: " << totalNumbers << endl;
for (int i = 0; i < r; i++) {
    cout << "Row " << (i + 1) <<" (" << c << " numbers): ";
    for (int j = 0; j < c; j++) {
        cin >> ann[i][j];
    }
}
int result = sum2D(ann, r, c);
cout << "The sum of all " << totalNumbers << " numbers is: " << result << endl;
cout << "The matrix you entered: " << endl;
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        cout << ann[i][j] << " ";
    }
    cout << endl;
}
for (int i = 0; i < r; i++) {
    delete[] ann[i];
}
    delete [] ann;
    return 0;
}