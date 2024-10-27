#include<iostream>
using namespace std;

int getPivote(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2; 

        if (arr[mid] >= arr[0]) {
            s = mid + 1; 
        } else {
            e = mid;
        }
    }
    return s; 
}

int main() {
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Element  :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = getPivote(arr, n);
    cout << result << endl;

    return 0;
}
