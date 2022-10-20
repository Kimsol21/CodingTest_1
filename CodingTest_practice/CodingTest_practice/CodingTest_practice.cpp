#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<char, string>> temp;
    for (string s : strings)
    {
        temp.push_back(make_pair(s[n], s));
    }
    sort(temp.begin(), temp.end());
    for (pair<char, string> p : temp)
    {
        answer.push_back(p.second);
    }
    return answer;
}

 int main(void) {
     vector<string> result = solution({ "abce" ,"abcd","cdx" }, 1);
     for (string s : result)
     {
         cout << s << endl;
     }
     return 0;
}


