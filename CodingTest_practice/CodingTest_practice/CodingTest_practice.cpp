#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] == arr[i]) continue;
        else answer.push_back(arr[i]);
    }
    return answer;
}

int main()
{
    vector<int>numbers = { 1,1,3,3,0,1,1 };
    for (auto i : solution(numbers))
        cout << i << endl;
}

