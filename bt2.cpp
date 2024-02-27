#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool Perfect(int n) {
    int s = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                s = s + i + n / i;
            } else {
                s = s + i;
            }
        }
    }
    if (s == n) return true;
    return false;
}

bool Palindrome(int n) {
    int r = 0;
    int t = n;
    while (t > 0) {
        r = r * 10 + t % 10;
        t = t / 10;
    }
    if (r == n) return true;
    return false;
}

bool Square(int n) {
    int r = sqrt(n);
    if (r * r == n) return true;
    return false;
}

void find(int arr[], int n) {
    cout << "Số nguyên tố: ";
    for (int i = 0; i < n; i++) {
        if (Prime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Số hoàn hảo: ";
    for (int i = 0; i < n; i++) {
        if (Perfect(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Số đối xứng: ";
    for (int i = 0; i < n; i++) {
        if (Palindrome(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Số lập phương: ";
    for (int i = 0; i < n; i++) {
        if (Square(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }
    find(arr, n); // Không khai báo biến n
    return 0;
}