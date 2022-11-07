#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[A.size() - i - 1];
    }

    return answer;
}

 int main(void) {
     vector<int> A = {1,4,2}; //answer = 29
     vector<int> B = {5,4,4};

     cout << solution(A, B)<< endl;
     return 0;
}


