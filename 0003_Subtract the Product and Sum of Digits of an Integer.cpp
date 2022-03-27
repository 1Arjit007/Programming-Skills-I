    int subtractProductAndSum(int n)
    {
        int sum=0;
        int prod=1;
        while(n)
        {
            int r=n%10;
            sum+=r;
            prod*=r;
            n/=10;
        }
        return (prod-sum);
    }
