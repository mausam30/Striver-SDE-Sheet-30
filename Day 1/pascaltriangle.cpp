class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);            
        for(int i = 0; i < n; i++) {
            ans[i] = vector<int>(i+1,1);        
            for(int j = 1; j < i; j++)          
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];            
        }
        return ans;
    }
};

// here create a 2d vector and give only the size
// then in the first for loop giving the column specification
// set all to 1, so each row will be consisting of ones now
// then in the second for loop add the above 2 elements to get
// the result