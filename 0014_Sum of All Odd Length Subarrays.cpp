    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            int temp=ceil((i+1)*(arr.size()-i)/2.0);
            ans+=temp*arr[i];
        }
        return ans;
    }
