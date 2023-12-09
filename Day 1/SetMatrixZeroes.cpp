class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans=matrix;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        ans[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        ans[k][j]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=ans[i][j];
            }
        }
        
    }
};

//this method is using extra space
//set the zeroes for rows and columns using the extra matrix and then put the data back into the original matrix