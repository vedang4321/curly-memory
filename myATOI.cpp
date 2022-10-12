/*

https://leetcode.com/problems/string-to-integer-atoi
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0;
        int nums=0;
        int n = s.length();
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        return 0;
        while(i<n&&s[i]==' ')
        {
            i++;
        }
        
        if(s[i]=='-')
        {
            sign*=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        
        while(i<n && s[i]>='0'&&s[i]<='9')
        {
            if(nums>INT_MAX/10||nums==INT_MAX/10&&(s[i]-'0'>INT_MAX%10))
            {
                if(sign==-1)
                return (INT_MIN);
                else
                return sign*(INT_MAX); 
            }
            nums=nums*10+(s[i]-'0');
            i++;
        }
        return nums*sign;
    }
};