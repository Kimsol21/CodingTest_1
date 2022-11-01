#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    answer += toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == ' ')
        {
            answer += toupper(s[i]);
        }
        else
        {
            answer += tolower(s[i]);
        }
    }
    return answer;
}

 int main(void) {
     string result = solution({ "  3peoPle unFollowed me  hap "	 });//return 3people Unfollowed Me
     cout << result << endl;
     return 0;
}


