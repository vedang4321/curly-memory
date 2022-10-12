/*
the instance sof subtraction is important

ITERATION

int romanToInt(string s) {
        unordered_map<char,int> mp;
        int num=0;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int i=0,j=1;
        int n =  s.length();
        while(j<n)
        {
            char cur = s[i];
            char next = s[j];
            
            if(mp[next]>mp[cur])
            {
                num+=mp[next] - mp[cur];
                i+=2;j+=2;
            }
            else
            {
                num+=mp[cur];
                i++;j++;
            }
        }
        if(i<n)
        {
            num+=mp[s[i]];
        }
        return num;
    }

    

*/