// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int minRepeats(string a, string b)
    {
        string temp = a;
        int count = 1;
        while (a.length() < b.length())
        {
            a += temp;
            count++;
        }

        if (a.find(b) == true)
        {
            return count;
        }

        a += temp;
        if (a.find(b) == true)
        {
            return count + 1;
        }

        return -1;
    }
};