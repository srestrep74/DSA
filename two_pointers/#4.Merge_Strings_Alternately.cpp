#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define mp make_pair
#define fi first
#define se second
#define pub push_back
#define pob pop_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fornr(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define um unordered_map

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vpii = vector<pii>;
using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using mii = map<int, int>;
using si = set<int>;
using umii = unordered_map<int, int>;
using umll = unordered_map<ll, ll>;

class Solution
{
public:
    // Time : O(m + n) where m = word1.size() and n = word2.size()
    // Space : O(m + n)
    string mergeAlternately(string word1, string word2)
    {
        int pointer = 0;

        string sol = "";

        // Iterate while the pointer does not finish  to traverse both strings
        while (pointer < word1.size() || pointer < word2.size())
        {
            // Add first de actual char of word1
            if (pointer < word1.size())
                sol += word1[pointer];

            // Then add the char of the word2
            if (pointer < word2.size())
                sol += word2[pointer];

            pointer++;
        }

        return sol;
    }
};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    // freopen("input.txt", "r" , "stdin");
    // freopen("output.txt" , "w" , "stdout");

    Solution *sol = new Solution();

    string word1 = "abcd";
    string word2 = "pq";

    cout << sol->mergeAlternately(word1, word2);

    return 0;
}
