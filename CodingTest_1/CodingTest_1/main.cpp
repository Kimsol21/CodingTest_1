#include <iostream>
#include <string>
#include <vector>

using namespace std;

string NUM[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s) {
    int answer = 0;
    int findResult = -1;
    for (int i = 0; i < 10; i++)
    {
        while (findResult = s.find(NUM[i]) != string::npos)
        {
            s.replace(findResult, NUM[i].length(), to_string(i));
        }
    }
    answer = stoi(s);
    return answer;
}

int main()
{
    while (1)
    {
        string myStr;
        cin >> myStr;
        cout << solution(myStr) << endl;
    }   
    return 0;
}

