#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto i : arr)
    {
        if (i % divisor == 0)
            answer.push_back(i);
    }
    if (answer.empty()) answer.push_back(-1);
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    vector<int> answer = solution({ 5, 9, 7, 10 }, 5);
    for(auto i : answer)
        cout << i << endl;
    return 0;
}

