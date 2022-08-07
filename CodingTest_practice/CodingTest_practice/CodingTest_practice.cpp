#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int order1[5] = { 1, 2, 3, 4, 5 };
    int order2[8] = { 2, 1, 2, 3, 2, 4, 2, 5};
    int order3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    vector<int> scores = { 0, 0, 0 };
    int highScore = 0;
    for (int i = 0; i<answers.size(); i++)
    {
        if (answers[i] == order1[i % 5]) scores[0]++;
        if (answers[i] == order2[i % 8]) scores[1]++;
        if (answers[i] == order3[i % 10]) scores[2]++;
    }
    highScore = *max_element(scores.begin(), scores.end());
    for (int i = 0; i < scores.size(); i++) 
    {
        if (scores[i] == highScore) answer.push_back(i+1);
    }  
    return answer;
}

int main()
{
    vector<int>answers = { 1, 2, 3, 4, 5 };
    vector<int>output = solution(answers);
    for (int i = 0; i < output.size(); i++) cout << output[i] << endl;
}

