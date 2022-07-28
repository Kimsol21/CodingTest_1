#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string NUM[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i = 0; i < 10; i++)
    {
        while (s.find(NUM[i]) != string::npos) //함수연산 굳이두번?
        {
            s.replace(s.find(NUM[i]), NUM[i].length(), to_string(i));
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