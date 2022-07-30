#include <iostream>
#include <cmath>

using namespace std;

long long solution(int w, int h) {
    long long answer = 0;
    double begin = 0, finish;
    for (int i = 1; i <= w; i++)
    {
        finish = (double)i * h / w;
        answer += ceil(finish) - floor(begin);
        begin = finish;
    }
    return (long long)w * h - answer;
}

int main()
{
    while (1)
    {
        int w, h;
        cin >> w>>h;
        cout << solution(w, h) << endl;
    }   

    return 0;
}

