


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        
        int n = s.length();
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            string word="";
            while(i<n&& s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            if(word!="")
            res = ' '+word+res;
        }
        res=res.substr(1);
            return res;
    
        
        
    }
};

