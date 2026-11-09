class Solution {
public:

    string encode(vector<string>& arr) {
        string ans = "";

        for(int i = 0; i < arr.size(); i++) {
            ans += to_string(arr[i].length()) + "/:" + arr[i];
        }

        return ans;
    }

    vector<string> decode(string &s) {
        vector<string> ans;
        int i = 0;

        while(i < s.length()) {

            int j = i;

            
            while(s[j] != '/') {
                j++;
            }

            int len = stoi(s.substr(i, j-i));

          
            j += 2;

          
            string str = s.substr(j, len);

            ans.push_back(str);

            i = j + len;
        }

        return ans;
    }
};
