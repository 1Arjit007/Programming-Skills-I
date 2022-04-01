    int diagonalSum(vector<vector<int>>& mat) 
    {
        int x=0,y=0;
        for(int i=0;i<mat.size();i++)
        {
            x+=mat[i][i];
            y+=mat[i][(mat.size())-i-1];
            
        }
        if(mat.size()%2==0)
        {
            return x+y;
        }
        else
        {
            return x+y-mat[(mat.size())/2][(mat.size())/2];
        }
    }
