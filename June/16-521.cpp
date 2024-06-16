#include<iostream>


using namespace std;
class Solution {
public:
    int findLUSlength(string a, string b) {
        int res = -1;
        if (a == b) {
            return -1;
        }
        return res = max(a.size(), b.size());
    }
};


int main() {
    Solution sol;
    string a = "aefawfawfawfaw", b = "aefawfeawfwafwaef";
    cout << sol.findLUSlength(a, b) << endl;
    return 0;
}