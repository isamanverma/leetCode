class Solution {
public:
    string sortSentence(string s) {
        vector<string> temp;
        int n = s.length();
        
        for (int i = 0; i < n; ) {
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i++];
            }
            temp.push_back(word);
            i++;
        }

        int m = temp.size();
        for (int i = 0; i < m - 1; i++) {
            for (int j = i + 1; j < m; j++) {
                if (temp[i].back() > temp[j].back()) {
                    swap(temp[i], temp[j]);
                }
            }
        }

        string ans = "";
        for (int i = 0; i < m; i++) {
            temp[i].pop_back();
            ans += temp[i];
            if (i < m - 1) {
                ans += ' ';
            }
        }
        return ans;
    }
};
