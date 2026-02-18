#include <iostream>
using namespace std;

int powerTail(int a, int b, int result = 1) {
    if (b == 0) return result;
    return powerTail(a, b - 1, result * a);
}

int main() {
    cout << powerTail(2, 5); 
    return 0;
}