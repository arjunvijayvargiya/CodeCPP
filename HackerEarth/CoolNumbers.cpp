#include <bits/stdc++.h>
 #include ll long long
 using namespace std;
// returns count of non-overlapping occurrences of 'sub' in 'str'
int countSubstring(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
	 offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}
int main(int argc, char **argc)
{
    ll t;
    cin>>t;
    return 0;
}
