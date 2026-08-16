class Solution {
public:
    string longestPalindrome(string s) 
    {   
        int n = s.size();
        string ans;
        int maxi = 0;
        int bestl = 0;
        int bestr = 0;
        for(int i=0;i<n;i++)
        {
            int l = i-1;
            int r = i+1;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    if(r-l+1>maxi)
                    {
                        maxi = r-l+1;
                        bestl = l;
                        bestr = r;
                    }
                    l--;
                    r++;
                }
                else break;
            }
            
            l = i;
            r = i+1;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                    if(r-l+1>maxi)
                    {
                        maxi = r-l+1;
                        bestl = l;
                        bestr = r;
                    }
                    l--;
                    r++;
                }
                else break;
            }
            
        }
        for(int i=bestl;i<=bestr;i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};