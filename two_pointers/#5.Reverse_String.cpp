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
    // Without using Two Pointers
    // Time : O(n/2)
    // Space : O(1)
    void reverseString1(vector<char> &s)
    {
        int n = s.size();
        int mid = n / 2;

        // Traverse until the mid of the array, and swap the current char with de corresponding char next to mid
        for (int i = 0; i < mid; i++)
        {
            char temp = s[i];
            s[i] = s[n - 1 - i];
            s[n - 1 - i] = temp;
        }
    }

    // Using Two Pointers
    // Time : O(n)
    // Space : O(1)
    void reverseString2(vector<char> &s)
    {
        int n = s.size();

        int left = 0;
        int right = n - 1;

        // Swap chars in both pointers until they meet
        while (left <= right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    // freopen("input.txt", "r" , "stdin");
    // freopen("output.txt" , "w" , "stdout");

    Solution *sol = new Solution();

    vector<char> s = {'s', 'e', 'b', 'a', 's'};

    sol->reverseString2(s);

    for (auto &u : s)
        cout << u << " ";

    return 0;
}
