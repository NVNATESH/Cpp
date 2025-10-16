#include<iostream>
using namespace std;

template <typename T>
void bubblesort(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void print(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    bubblesort(A, n);
    cout << "Sorted Array: ";
    print(A, n);

    return 0;
}
