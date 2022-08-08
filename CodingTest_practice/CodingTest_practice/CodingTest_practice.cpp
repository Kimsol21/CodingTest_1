#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> result;
    int num = numbers.size();
    for (int i = 0; i < num; i++)
    {
        for(int k = i + 1; k < num; k++)
        {
            result.insert(numbers[i] + numbers[k]);
        }
    }
    for (int i : result)
    {
        answer.push_back(i);
    }
    return answer;
}

int main()
{
    vector<int>numbers = { 2, 1, 3, 4, 1 };
    vector<int>output = solution(numbers);
    for (int i = 0; i < output.size(); i++) cout << output[i] << endl;
}

