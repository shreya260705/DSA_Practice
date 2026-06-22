#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int wordLadder(string start, string end, vector<string>& wordL) {

        queue<pair<string, int>> q;
        q.push({start, 1});

        unordered_set<string> st(wordL.begin(), wordL.end());

        st.erase(start);

        while (!q.empty()) {

            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (word == end)
                return steps;

            for (int i = 0; i < word.size(); i++) {

                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {

                    word[i] = ch;

                    if (st.find(word) != st.end()) {
                        st.erase(word);
                        q.push({word, steps + 1});
                    }
                }

                word[i] = original;
            }
        }

        return 0;
    }
};