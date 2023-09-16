#include <iostream>
#include "math.h"

using namespace std;


double pi(int n) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += pow(-1, i) / (2*i + 1);
    }

    return 4*result;
}

int main() {
    int n;
    cin >> n;
    cout << pi(n) << endl;
    return 0;
}


