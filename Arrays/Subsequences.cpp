#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Recursive approach
void findSubsequences(string str, int index, string current, vector<string>& result) {
    if (index == str.length()) {
        result.push_back(current);
        return;
    }
    
    // Exclude current character
    findSubsequences(str, index + 1, current, result);
    
    // Include current character
    findSubsequences(str, index + 1, current + str[index], result);
}

int main() {
    string str = "abc";
    vector<string> subsequences;
    
    findSubsequences(str, 0, "", subsequences);
    
    cout << "All subsequences of \"" << str << "\":" << endl;
    cout << "Total count: " << subsequences.size() << endl << endl;
    
    for (const string& subseq : subsequences) {
        if (subseq.empty()) {
            cout << "\"\" (empty string)" << endl;
        } else {
            cout << subseq << endl;
        }
    }
    
    return 0;
}
