// Your code here
#include "potd.h"
#include <vector>

using namespace std;

string getFortune(const string &s)
{
    vector<string> ans = {"1","2","3","4","5"};
    int strLength = s.length();
    strLength = strLength % 5;
    return ans[strLength];
}