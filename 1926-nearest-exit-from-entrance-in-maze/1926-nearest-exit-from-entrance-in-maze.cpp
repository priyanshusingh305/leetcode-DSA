class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>> q;
        int r = maze.size();
        int c = maze[0].size();
        q.push({entrance[0], entrance[1]});
        int steps = 0;
        const int dx[4] = {0, 1, -1, 0};
        const int dy[4] = {1, 0, 0, -1};
        maze[entrance[0]][entrance[1]] = '+';
        while(!q.empty()) {
            int n = q.size();
            steps++;
            for(int i=0;i<n;i++) {
                auto pair = q.front();
                q.pop();
                for(int t=0;t<4;t++) {
                    int new_x = pair.first + dx[t];
                    int new_y = pair.second + dy[t];
                    if(new_x >= 0 and new_x < r and new_y >= 0 and new_y < c) {
                        if(maze[new_x][new_y] == '.' and (new_x == 0 or new_x == r-1 or new_y == 0 or new_y == c-1))
                            return steps;
                        if(maze[new_x][new_y] == '.') {
                            maze[new_x][new_y] = '+';
                            q.push({new_x, new_y});
                        }
                    }
                }
            }
        }
        return -1;
        
    }
};