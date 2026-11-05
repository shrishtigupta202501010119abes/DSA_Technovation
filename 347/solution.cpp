
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      for (int x : nums) {
            mp[x]++;
        }

 vector<int> v;

   for (auto x : mp) {
         v.push_back(x.first);
        }
      sort(v.begin(), v.end(), [&](int a, int b) {
            return mp[a] > mp[b];
        });
 vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i]);
        }

        return ans;
    }
};

