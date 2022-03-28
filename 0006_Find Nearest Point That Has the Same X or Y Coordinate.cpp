    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
                //first of all it should share either x or y cordinate. If it does not then return -1;
        int idx = -1;
        int minDistance = INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0] == x)
            { //checking if the X cordinate is same or not.
                //if point x is same
                //then storing the index. Only if the Distance is minimum. If it is same then we have to return the val with minimum index.
				        if(abs(points[i][1]-y)<minDistance)
                { 
                    idx = i;
                }
                minDistance = min(minDistance, abs(points[i][1]-y)); //calculating the minDistance so keep track of what is the minimum distance that we need in order to get same points.
            }
            else if(points[i][1] == y)
            {
                //if point y is same
                if(abs(points[i][0]-x)<minDistance)
                {
                    idx = i;
                }
                minDistance = min(minDistance, abs(points[i][0]-x));
            }
        }
		// now idx has the minimum index. If it did not found any index, then it have -1. Which is acc. to ques we have to return in case we did not found any solution.
        return idx;
    }
