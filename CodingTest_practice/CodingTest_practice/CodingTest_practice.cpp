#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> nDivisor;//약수
    vector<int> mDivisor;
    vector<int> CommonDivisor; //공약수
    int greatestCommonDivisor = 0; //최대공약수
    int leastCommonMultiple = 0; //최소공배수

    for (int i = 1; i < n+1; i++)
    {
        if (n % i == 0) nDivisor.push_back(i);
    }
    for (int i = 1; i < m+1; i++)
    {
        if (m % i == 0) mDivisor.push_back(i);
    }
    for (auto i : nDivisor)
    {
        if (find(mDivisor.begin(), mDivisor.end(), i) == mDivisor.end()) continue;
        else greatestCommonDivisor = i;
    }
    leastCommonMultiple = n / greatestCommonDivisor * m;
    answer.push_back(greatestCommonDivisor);
    answer.push_back(leastCommonMultiple);

    return answer;
}

int main(void) {
    vector<int> answer = solution(3, 12);
    for (auto i : answer)
        cout << i << endl;
    return 0;
}


