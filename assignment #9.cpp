#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum = 0, a;
    int x, i;

    cout << "Enter a value: ";
    cin >> x;

    for (i = 1; i <= x; i++) {
        a = 1.0 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << a << endl;
        sum += a;
    }

    cout << "Sum of series: " << sum << endl;

    return 0;
}
