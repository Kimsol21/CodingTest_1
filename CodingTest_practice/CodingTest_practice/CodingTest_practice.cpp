#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string BinaryTransformation(int _input)
{
    string temp = "";
    while (1 < _input)
    {
        temp += to_string(_input % 2);
        _input = _input / 2;
    }
    temp += '1';

    reverse(temp.begin(), temp.end());

    return temp;
}

vector<int> solution(string s) {
    vector<int> answer;
    string removedZeroString = "";
    int removedZero = 0;
    int countRemoving = 0;

    while (s!="1")
    {
        for (char c : s)//0을 빼는 과정.
        {
            if ('0' == c)
            {
                removedZero++;
            }
            else
            {
                removedZeroString += c;
            }
        }
        countRemoving++;
        s = BinaryTransformation(removedZeroString.size());//0을뺀 이진수의 자릿수를 이진변환.
        removedZeroString.clear();
        
    }
    
    answer.push_back(countRemoving);
    answer.push_back(removedZero);
    return answer;
}

 int main(void) {
     vector<int> answer = solution("110010101001");
     for (int i : answer)
     {
         cout << i << endl;
    }
     return 0;
}


