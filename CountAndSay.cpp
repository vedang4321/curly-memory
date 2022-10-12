/*
n=4

1211
n   1  2   3   4
res 1->11->21->1211

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string fn(string say, int n)
    {
        if (n == 0)
            return say;
        int i = 0;
        string res = "";
        while (i < say.size())
        {
            int j = i;
            while (i < say.size() && say[i] == say[j])
            {
                i++;
            }
            res += to_string(i - j) + say[j];
        }
        return fn(res, n - 1);
    }
    string countAndSay(int n)
    {

        if (n == 1)
            return "1";

        string say = "1";
        return fn(say, n - 1);
    }
};