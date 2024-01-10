#include <iostream>
using namespace std;
 bool check(string &s)
{
    int i = 0, j = (int)s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
}
int main()
{
    string s="abcdcba";
   // cout << (check(s) ? "YES" : "NO");
   if(check(s)){
    cout<<"Yes";
    }else{
        cout<<"No";
    }
}
