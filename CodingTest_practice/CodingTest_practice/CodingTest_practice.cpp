#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int curIndex = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (' ' == s[i])
        {
            curIndex = 0;
            answer += ' ';
            continue;
        }
        else
        {
            if (curIndex % 2 == 0)
            {
                if (s[i] >= 'a' && s[i] <= 'z') answer += s[i] - 32;
                else answer += s[i];
            }
            else
            {
                if(s[i] >= 'a' && s[i]) answer += s[i];
                else answer += s[i] + 32;
            }
            curIndex++;
        }
    }
    return answer;
}

 int main(void) {
     cout << solution("try hello world") << endl;
     return 0;
}


