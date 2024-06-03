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
    // Return true if a char is alphanumeric.
    // O(1)
    bool isAlphaNumeric(char c)
    {
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') && (c != ' ');
    }

    // Time : O(n)
    // Space : O(1)
    bool isPalindrome(string s)
    {
        int n = s.size();

        int left = 0;
        int right = n - 1;

        bool sol = true;

        while (left < right)
        {
            // Ignore non-alphanumeric chars
            while (left < right && !isAlphaNumeric(tolower(s[left])))
            {
                left++;
            }

            while (right > left && !isAlphaNumeric(tolower(s[right])))
            {
                right--;
            }

            // If are differente, is not palindrome
            if (tolower(s[left]) != tolower(s[right]))
            {
                sol = false;
                break;
            }

            // Move both pointers to continue with the next chars
            left++;
            right--;
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

    string test = "tab a cat";

    cout << sol->isPalindrome(test);

    return 0;
}
