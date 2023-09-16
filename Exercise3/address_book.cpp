#include "iostream"
#include <map>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    map<int,array<string,8>> bag;
    string command, result="", entry;
    int x;
    cin >> command;
    while (command != "quit") {
        cin >> x;
        if (command == "add" ) {
                for (int i = 0; i < bag[x].size(); i++) {
                    cin >> entry;
                    if (bag[x][i] == "\0"){
                        bag[x][i] = entry;
                    }
                }
        }
        else if (command == "clr" && x <=50) 
        {
            if (auto search = bag.find(x); search != bag.end()) {
                bag.erase(search);
            }
        }
        else {
            if (auto search = bag.find(x); search != bag.end() && x<=50) {
                // Erase the element at the found iterator position
                for (auto e : bag[x]) {
                    result += e + ',';
                }
                result.pop_back();
                cout << result << endl;
                result = "";
            }
        }
        cin >> command;
                
    }


    return 0;
}