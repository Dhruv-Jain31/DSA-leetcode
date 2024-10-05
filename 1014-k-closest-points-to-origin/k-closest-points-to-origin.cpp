class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int, int>>> pq;
        int n = points.size();
        for(int i = 0; i<n ; i++){
            int x = points[i][0], y = points[i][1];
            int distance = ((x*x) + (y*y));
            pq.push({distance,i});
        }
        vector<vector<int>>result;
        for(int i = 0; i < k; i++){
            int j = pq.top().second;
            result.push_back({points[j][0], points[j][1]});
            pq.pop();
        }
        return result;
    }
};