#include <iostream>
using namespace std;



void inputAndFindMinMax(int n, int &minVal, int &maxVal) {
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " <<i+1 <<" :";
        cin >> arr[i];

          if (i == 0)
        {
            minVal = arr[i];
            maxVal = arr[i];
        } else {
            if (arr[i] < minVal) minVal = arr[i];
            if (arr[i] > maxVal) maxVal = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int minValue, maxValue;
    inputAndFindMinMax(n, minValue, maxValue);
    cout << "\nMinimum value = " << minValue << endl;
    cout << "Maximum value = " << maxValue << endl;

    return 0;
}
