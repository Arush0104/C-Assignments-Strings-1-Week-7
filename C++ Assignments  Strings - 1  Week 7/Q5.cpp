#include <iostream>
using namespace std;
int main()
{
    string s="123";
    int result=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
        } else{
        cout<<"Error";
    }

}
    cout << result;
}