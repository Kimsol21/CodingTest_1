#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    vector<int> Numbers;
    int max = 0, min = 0;
    for (char c : s)
    {
        if (' ' == c)
        {
            Numbers.push_back(stoi(temp));
            temp = "";
        }
        else
        {
            temp += c;
        }
    }
    if (temp != "")
    {
        Numbers.push_back(stoi(temp));
    }
    sort(Numbers.begin(), Numbers.end());

    answer += to_string(Numbers[0]);
    answer += " ";
    answer += to_string(Numbers[Numbers.size() - 1]);

    return answer;
}

 int main(void) {
     string result = solution({ "-1 -2 -3 -4"	 });
     cout << result << endl;
     return 0;
}


