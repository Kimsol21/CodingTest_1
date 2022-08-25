#include <iostream>
#include <string>

using namespace std;

bool solution(const string s)
{
    bool answer = false;
    int count = 0;
    for (auto c : s)
    {
        if ('p' == c || 'P' == c) count++;
        else if ('y' == c || 'Y' == c) count--;
        else continue;
    }
    if (count == 0 && s.size() > 0) answer = true;
    return answer;
}

int main()
{
    cout << solution("pPoooyY") << endl; //true
    return 0;
}

