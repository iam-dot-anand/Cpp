#include <iostream>
#include <string>
using namespace std;

void adjacentDuplicate(string str) {
    int strlength = str.length();
    cout << "Length: " << strlength << endl;
    
    string ans = "";
    int index = 0;
    
    while (index < strlength) {
        // Check if the last character in `ans` matches the current character in `str`
        if (ans.length() > 0 && ans.back() == str[index]) {
            ans.pop_back();  // Remove the last character in `ans`
        } else {
            ans.push_back(str[index]);  // Add current character to `ans`
        }
        index++;
    }
    cout << "Output after removing adjacent duplicates: " << ans << endl;
}

int main() {
    string str = "Aand";
    adjacentDuplicate(str);
    return 0;
}
