#include "iostream"

using namespace std;

int main() {
    int n;
    int visited [1000] = {0}; 
    cin >> n;
    while (n>0 && n<=1000) {
        cout <<  visited[n-1] << endl;
        visited[n-1] += 1;
        cin >> n ;
    }
    return 0;
}