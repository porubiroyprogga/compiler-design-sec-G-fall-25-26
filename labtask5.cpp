#include <iostream>
using namespace std;


double average(int n) {
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = (double)sum / n;
    return avg;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double result = average(n);
    cout << "Average value of the array elements = " << result << endl;

    return 0;
}
