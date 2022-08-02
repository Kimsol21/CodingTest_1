#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<pair<int, int>> Students;
    Students.reserve(n);
    for (int i = 0; i < n; ++i)
    {
        Students.push_back(make_pair(i, 1));
    }
    for (unsigned int i = 0; i < lost.size(); i++)
    {
        Students[lost[i]-1].second -= 1;
    }
    for (unsigned int i = 0; i < reserve.size(); i++)
    {
        Students[reserve[i]-1].second += 1;
    }

    vector<pair<int, int>>::iterator iter;
    for (iter = Students.begin(); iter != Students.end(); ++iter)
    {
        int clothes = iter->second;
        if (iter == Students.begin()) 
        {
            if (clothes == 2 && (iter+1)->second < 1)
            {
                (iter+1)->second += 1;
                continue;
            }
            else continue;
        }
        else if (iter == Students.end() - 1)
        {
            if (clothes == 2 && (iter - 1)->second < 1)
            {
                (iter - 1)->second += 1;
                continue;
            }
            else continue;
        }
        else
        {
            if (clothes == 2 && (iter - 1)->second < 1)
            {
                (iter - 1)->second += 1;
                continue;
            }
            else if (clothes == 2 && (iter + 1)->second < 1)
            {
                (iter + 1)->second += 1;
                continue;
            }
        }       
    }
    for (iter = Students.begin(); iter != Students.end(); ++iter)
    {
        if (iter->second >= 1)
            answer += 1;
    }

    return answer;
}

int main()
{
    vector<int> lost = { 2,4 };
    vector<int> reserve = { 1, 3, 5 };
    int n = 5;

    cout << solution(n, lost, reserve);

    return 0;
}

