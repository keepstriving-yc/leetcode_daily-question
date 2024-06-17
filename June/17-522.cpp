#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string& a, string& b) {
        int i = 0;
        for(char c : b) {
            if (a[i] == c && ++i == a.size()) {
                return true;
            }
        }
        return false;
    }

    int findLUSlength(vector<string>& strs) {
        int res = -1;
        for (int i = 0; i < strs.size(); ++i) {
            bool flag = true;
            if ((int)strs[i].size() <= res) {
                continue;
            }
            for (int j = 0; j < strs.size(); ++j) {
                if(i == j) continue;
                if(isSubsequence(strs[i], strs[j])) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                res = max(res, (int)strs[i].size());
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"aba", "cdc", "eae"};
    cout << sol.findLUSlength(strs) << endl;
    return 0;
}