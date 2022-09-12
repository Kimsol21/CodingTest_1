#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    for (auto i : str)
    {
        answer.push_back(i - '0');
    }
    return answer;
}

int main()
{
    vector<int> answer = solution(12345);
    for (auto i : answer)
        cout << i << endl; //return 5,4,3,2,1
    return 0;
}

