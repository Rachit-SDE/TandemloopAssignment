#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    int count = (a % 2 == 0) ? a - 1 : a;
    for (int i = 0; i < count; ++i) {
        cout << (2 * i + 1);
        if (i != count - 1) cout << ", ";
    }
    cout << endl;
    return 0;
}
