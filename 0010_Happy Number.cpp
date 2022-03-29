    bool isHappy(int n) 
    {
        int sum=0;
        while(true)
        {
            while(n)
            {
                int digit=(n%10);
                sum+=(digit*digit);
                n/=10;
            }
            if(sum==1)
            {
                return true;
            }
            else if(sum==4)
            {
                return false;
            }
            else
            {
                n=sum;
                sum=0;
            }
        }
    }
