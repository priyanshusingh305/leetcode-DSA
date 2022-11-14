class Solution {
public:
    //
     bool checkSameRowOrColumn(vector<int> &stone1, vector<int> &stone2) {
        if(stone1[0] == stone2[0]) return true;
        if(stone1[1] == stone2[1]) return true;
        return false;
    }
    void dfs(vector<bool> &visited, vector<vector<int>> &stones,int idx){
        visited[idx] = true;
        for(int i=0;i<stones.size();i++) {
            if(!visited[i] && checkSameRowOrColumn(stones[i],stones[idx])){
                dfs(visited,stones,i);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int count = 0;
        vector<bool> visited(n,0) ;
        for(int i=0;i<n;i++) {
            if(!visited[i]){
                count++;
                dfs(visited,stones,i);
            }
       

        }
        return n - count;}
};