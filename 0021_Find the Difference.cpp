    char findTheDifference(string s, string t) 
    {
        char c=0;
        for(char c1:s)
        {
            c=c^c1;
        }
        for(char c2:t)
        {
            c=c^c2;
        }
        return c;
    }
