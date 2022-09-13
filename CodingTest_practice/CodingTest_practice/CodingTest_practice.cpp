#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();
    for (int i = 0; i < length; i++)
    {
        if (length - i < 5)
        {
            answer += phone_number[i];
            continue;
        }
        else
        {
            answer += '*';
        }
    }
    return answer;
}

int main()
{
    cout << solution("01033334444") << endl; //return "*******4444"
    return 0;
}

