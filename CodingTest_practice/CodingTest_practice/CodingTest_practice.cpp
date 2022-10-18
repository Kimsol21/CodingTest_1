#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = n;
    vector<int>Nums;
    while (num >= 3)
    {
        Nums.push_back(num % 3);
        num = num / 3;
    }
    Nums.push_back(num);
    for (int i = 0; i < Nums.size(); i++)
    {
        answer += Nums[i] * pow(3, Nums.size() - i-1);
    }
    return answer;
}

 int main(void) {
     cout << solution(45) << endl; //return 7
     return 0;
}


