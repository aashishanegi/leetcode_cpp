class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int maxone=INT_MIN;
    int idx=-1;
    int column=mat[0].size();
    int count;
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==1)
            {
                count=column-j;
            }
            if(count>maxone)
            {
                maxone=count;
                idx=i;
            }
        }
    }
    return {idx,maxone};      
    }
};
