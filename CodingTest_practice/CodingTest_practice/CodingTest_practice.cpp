#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> week = {  "THU","FRI", "SAT" ,"SUN", "MON", "TUE", "WED"};
    vector<int> month = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = 0;
    for (int i = 1; i < a; i++) days += month[i-1];
    days += b;
    answer = week[days % 7];
    return answer;
}

int main()
{
    cout << solution(5, 24) << endl;
}

