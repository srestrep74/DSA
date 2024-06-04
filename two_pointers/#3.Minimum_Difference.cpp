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
    // Time : O(nlogn)
    // Space : O(1)
    int minimumDifference(vector<int> &nums, int k)
    {
        // Sort the array so that  each num is the less far away from the ones  that are less
        sort(nums.begin(), nums.end());

        int min_sol = INT_MAX;

        // Two pointers for the window of k  size
        int left = 0;
        int right = k - 1;

        while (right < nums.size())
        {
            // For the window, the max number of the interval of size k is gonna be on right, and the less one on left
            min_sol = min(min_sol, nums[right] - nums[left]);
            left++;
            right++;
        }

        return min_sol;
    }
};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    // freopen("input.txt", "r" , "stdin");
    // freopen("output.txt" , "w" , "stdout");

    Solution *sol = new Solution();

    vector<int> nums = {9, 4, 1, 7};

    int k = 2;

    cout << sol->minimumDifference(nums, k);

    return 0;
}
