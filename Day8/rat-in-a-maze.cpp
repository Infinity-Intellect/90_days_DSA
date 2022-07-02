void recursePaths(vector<vector<int>>& maze, int n, int i, int j,
                 vector<vector<int>>& paths, vector<int> currentPath,
                 vector<vector<bool>>& visited) {
    if(i == n-1 && j == n-1) {
        currentPath[i*n+j] = 1;
        paths.push_back(currentPath);
    }
    else {
        if(maze[i][j] == 1) {
            currentPath[i*n + j] = 1;
            
            if(i+1 < n && !visited[i+1][j] && maze[i+1][j] == 1) {
                visited[i][j] = true;
                recursePaths(maze, n, i+1, j, paths, currentPath, visited);
                visited[i][j] = false;
            }

            if(j+1 < n && !visited[i][j+1] && maze[i][j+1] == 1) {
                visited[i][j] = true;
                recursePaths(maze, n, i, j+1, paths, currentPath, visited);
                visited[i][j] = false;
            }
            
            if(i-1>=0 && !visited[i-1][j] && maze[i-1][j] == 1) {
                visited[i][j] = true;
                recursePaths(maze, n, i-1, j, paths, currentPath, visited);
                visited[i][j] = false;
            }
            
            if(j-1>=0 && !visited[i][j-1] && maze[i][j-1] == 1) {
                visited[i][j] = true;
                recursePaths(maze, n, i, j-1, paths, currentPath, visited);
                visited[i][j] = false;
            }
        }        
    }
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
    vector<vector<int>> paths;
    vector<int> currentPath(n*n, 0);
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    recursePaths(maze, n, 0, 0, paths, currentPath, visited);
    return paths;
}
