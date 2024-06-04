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
    bool isPalindrome(string s, int left, int right)
    {
        int sol = true;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                sol = false;
                break;
            }
            left++;
            right--;
        }

        return sol;
    }

    // Time : O(n)
    // Space : O(1)
    bool validPalindrome(string s)
    {

        int left = 0;
        int right = s.size() - 1;

        bool sol = true;

        while (left < right)
        {
            // If are the same chars, keep moving pointers
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                // If are different, check  if the substring is palindrome without taking the left or without taking  the  right
                sol = isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
                break;
            }
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

    string test = "abcbba";

    cout << sol->validPalindrome(test);

    return 0;
}
