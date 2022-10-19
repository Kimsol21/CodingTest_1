#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ChangeNum(int n, int max)
{
    vector<int> retval;
    while (n >= 2)
    {
        retval.push_back(n % 2);
        n /= 2;    
    }
    if (n > 0)
    {
        retval.push_back(1);
    }    
    while (retval.size() < max)
    {
        retval.push_back(0);
    }
    reverse(retval.begin(), retval.end());
    return retval;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string tempS;
    vector<vector<int>> map1;
    vector<vector<int>> map2;
    for (int i = 0; i < n; i++)
    {
        map1.push_back(ChangeNum(arr1[i], n));
        map2.push_back(ChangeNum(arr2[i], n));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map1[i][j] == 1 || map2[i][j] == 1)
            {
                tempS += '#';
                continue;
            }
            else
            {
                tempS += ' ';
                continue;
            }
        }
        answer.push_back(tempS);
        tempS = "";
    }
    return answer;
}

 int main(void) {
     vector<string> answer = solution(5, { 0,20,28,18,11 }, { 0,1,21,17,28 });
     for (string s : answer)
     {
         cout << s << endl;
     }
     return 0;
}


