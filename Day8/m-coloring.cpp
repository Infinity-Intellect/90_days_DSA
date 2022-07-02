bool isColoringPossible(vector<vector<int>>& mat, int node, 
                        int color, vector<int>& colors) {
    for(int i=0;i<mat.size();i++) {
        if(i!=node &&
          mat[node][i]==1 &&
          colors[i]==color) {
            return false;
        }
    }
    return true;
}
bool solveMColoring(vector<vector<int>>& mat, int m, vector<int>& colors,
                    int node) {
    if(node == mat.size()) {
        return true;
    }
    for(int i=1;i<=m;i++) {
        if(isColoringPossible(mat, node, i, colors)) {
            colors[node] = i;
            if(solveMColoring(mat, m, colors, node+1)) {
                return true;
            }
            colors[node] = 0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    vector<int> colors(mat.size(), 0);
    string yes = "YES";
    string no = "NO";
    return solveMColoring(mat, m, colors, 0) ? yes: no;
}
