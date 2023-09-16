#include "iostream"
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> bag;
    string command, result="";
    int x;
    cin >> command;
    while (command != "quit") {
        cin >> x;
        if (command == "add") {
            bag.push_back(x);
        }
        else if (command == "del") 
        {
            bag.erase(remove(bag.begin(), bag.end(), x), bag.end());
            
        }
        else {
            auto it = find(bag.begin(), bag.end(), x);

            if (it != bag.end()) {
                // Erase the element at the found iterator position
                result += "T";
            }
            else {
                result += "F";
            }
        }
        cin >> command;
    }
    cout << result << endl;
    return 0;
}