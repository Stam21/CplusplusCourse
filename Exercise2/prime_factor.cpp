#include "iostream"
#include <string>
using namespace std;

int main() {
    int n , i= 2;
    string result;

    cin >> n ; 
    while (n >= i) {
        if (n==i) {
            result += to_string(i);
            break;
        }
        if (n%i == 0){   
            result += to_string(i) + " * ";
            n /= i ;
        }
        else {
            i+=1;
        }
    }
    cout << result << endl;
    return 0;
}