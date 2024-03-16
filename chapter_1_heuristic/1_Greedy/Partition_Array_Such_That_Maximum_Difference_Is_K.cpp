#include <bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int dem = 0;
        int i = 0, j = 0;
        int n = nums.size();
        while (i < n)
        {
            cout << "ok\n";
            j = i+1;
            while (j < n && nums[j]-nums[i] <= k)
                ++j;
            ++dem;
            i = j;
        }
        return dem;

int main()
{
    vector<int> a = {2,2,4,5};
    int k =0;
    cout << partitionArray(a, k);
    return 0;
}
