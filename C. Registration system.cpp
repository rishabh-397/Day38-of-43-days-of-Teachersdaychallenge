#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> database;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (database.find(s) == database.end()) {
            database[s] = 1;
            cout << "OK" << endl;
        } else {
            int num = database[s];
            string new_name;
            do {
                new_name = s + to_string(num);
                num++;
            } while (database.find(new_name) != database.end());
            
            database[s] = num;
            database[new_name] = 1;
            cout << new_name << endl;
        }
    }
    
    return 0;
}
