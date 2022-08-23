#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(const vector<int> d, int budget) {
    int answer = 0;
    vector<int> temp = d;
    sort(temp.begin(), temp.end());
    for (auto i : temp)
    {
        budget -= i;
        if (budget < 0) break;
        else answer++;
    }
    return answer;
}

int main()
{
    cout << solution({ 1,3,2,5,4 }, 9) << endl;
    return 0;
}

