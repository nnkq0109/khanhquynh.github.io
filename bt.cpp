#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập một số nguyên: ";
    cin << n;
    
    int t = n;

    while (t != 0) { 
        int r = t % 10;
        r = r * 10 + r;
        t = t/10;
    }

    if (n == r) {
        cout << "Số đó là số đối xứng." << endl;
    } else {
        cout << "Số đó không phải là số đối xứng." << endl;
    }

    return 0;
}