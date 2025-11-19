#include <iostream>
using namespace std;
void setToHundred(int** p) {
**p = 100;
}
int main() {
int num;
int* ptr = &num;
cin >> num;
setToHundred(&ptr);
cout << num << endl;
return 0;
                                                                                                                                                                                                                                                                                                                                                  }