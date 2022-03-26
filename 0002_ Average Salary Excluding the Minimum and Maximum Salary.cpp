    double average(vector<int>& salary)
    {
        double sum=0;
        int count=0;
        sort(salary.begin(),salary.end());
        for(auto x:salary)
        {
            sum=sum+double(x);
        }
        sum=sum-salary[0]-salary[salary.size()-1];
        return sum/(salary.size()-2);
        
    }
