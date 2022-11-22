#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sumTotal = 0;

    for (int startNum = 1; startNum < n / 2+1; startNum++)
    {
        int plus = 0;
        while (sumTotal < n)
        {
            sumTotal += startNum + plus;
            plus++;
        }
        if (sumTotal == n) answer++;
        sumTotal = 0;
    }
    return answer+1;
}

int main()
{
    cout << solution(15) << endl; //result 4
    return 0;
}


