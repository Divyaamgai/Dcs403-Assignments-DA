#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Using pre-increment
    cout << "Using pre-increment (++a): ";
    cout << ++a << " ";  // 'a' is incremented first, then printed (prints 6)

    // Resetting 'a' to 5 for the next demonstration
    a = 5;

    // Using post-increment
    cout << "Using post-increment (a++): ";
    cout << a++ << " ";  // 'a' is printed first (prints 5), then incremented

    cout << "After post-increment, a = " << a << endl;  // Now a = 6

    return 0;
}
