#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correctNum = 0;
    int allNums[46] = { 0, };
    for (int i : lottos) allNums[i] += 1;
    for (int i : win_nums) allNums[i] += 1;
    for (int i = 1; i < 46; i++) 
        if (2 == allNums[i]) correctNum += 1;
    correctNum < 1 && allNums[0] < 1 ? answer.push_back(6) : answer.push_back(7 - correctNum - allNums[0]);
    correctNum<2 ? answer.push_back(6) : answer.push_back(7 - correctNum);
    return answer;
}

int main()
{
    vector<int> lottos = { 44, 1, 0, 0, 31, 25 };
    vector<int> win_nums = { 31, 10, 45, 1, 6, 19 };
    vector<int> answer;
    answer = solution(lottos, win_nums);
    for (int i : answer)
    {
        cout << i << endl;
    }
    return 0;
}

