#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int price, int money, int count)
{
    long long result;
    long long myMoney = money;
    for (long long i = 1; i <= count; i++)
        myMoney -= price * i;
    if (myMoney < 0) result = -1 * myMoney;
    else result = 0;
    return result;
}

int main()
{
    cout << solution(3, 20, 4) << endl; //return: 10
    return 0;
}

