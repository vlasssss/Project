#include <iostream>
using namespace std;

int main() {
    int sum;

    cin >> sum;

    int ost = sum % 10;
    int ost2 = sum % 100;

    if (ost2 > 10 && ost2 < 20) {
        cout << sum << " �������" << endl;
    }
    else if (ost == 1) {
        cout << sum << " ������" << endl;
    }
    else if (ost >= 1 && ost <= 4) {
        cout << sum << " �����" << endl;
    }
    else {
        cout << sum << " �������" << endl;
    }
}