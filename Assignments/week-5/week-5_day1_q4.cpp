#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    if (index == size) return;

    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    printArray(arr, 4, 0); 
    return 0;
}