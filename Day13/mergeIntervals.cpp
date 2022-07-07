class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        
        sort(intervals.begin(), intervals.end(), compare);
        
        merged.push_back(intervals[0]);
        
        int i = 1, k =0;
        for(int i=0;i<intervals.size();i++) {
            if(intervals[i][0] <= merged[k][1]) {
                merged[k][1] = max(intervals[i][1], merged[k][1]);
            }
            else {
                merged.push_back(intervals[i]);
                ++k;
            }
        }
        
        return merged;
    }
};
