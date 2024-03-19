class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int hash[26] = {0};
        for(char task : tasks){
            hash[task - 'A']++;
        }
        sort(begin(hash) , end(hash));
        int cum = hash[25] - 1;
        int ans = cum * n;

        for(int i=24; i>=0; i--){
            ans -= min(cum,hash[i]);
        }

        return ans < 0 ? tasks.size() : tasks.size() + ans;
    }
};
