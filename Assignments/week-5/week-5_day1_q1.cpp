#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return; 

    printNumbers(n - 1); // calling recursive first
    cout << n << " ";
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}