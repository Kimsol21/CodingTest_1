#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) { //n¿∫ 2,3,4...
    long long answer = 0;
    long long temp = 0;
    int count = 2;
    long long fiv1 = 0;
    long long fiv2 = 1;
    
    while (count <= n)
    {
        if (1234567 <= answer)
        {
            answer %= 1234567;
            fiv1 %= 1234567;
            fiv2 %= 1234567;
        }
        temp += fiv1 + fiv2;
        fiv1 = fiv2;
        fiv2 = temp;
        answer = temp;
        temp = 0;
        count++;
    }

    return answer % 1234567;
}

int main()
{
    cout << solution(47) << endl; //result 5
    return 0;
}


