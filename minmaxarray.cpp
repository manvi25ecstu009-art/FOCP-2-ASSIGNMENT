#include <iostream>
using namespace std;
void find_minmax(int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;
    int minVal, maxVal;
    find_minmax(arr, n, minVal, maxVal);
    cout << "Min = " << minVal << endl;
    cout << "Max = " << maxVal << endl;
    return 0;
}