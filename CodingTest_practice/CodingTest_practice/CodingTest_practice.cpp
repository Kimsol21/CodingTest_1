#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

 int solution(vector<int>& height) {
     int answer = 0;
     int maxHeightIndex = max_element(height.begin(), height.end())-height.begin();
     int maxHeight = 0;
     for (int i = 0; i < maxHeightIndex; i++)
     {
         if (maxHeight <= height[i]) maxHeight = height[i];
         else
         {
             answer += maxHeight - height[i];
         }
     }
     maxHeight = 0;
     for (int i = height.size() - 1; i > maxHeightIndex; i--)
     {
         if (maxHeight <= height[i]) maxHeight = height[i];
         else
         {
             answer += maxHeight - height[i];
         }
     }
     return answer;
}

 int main(void) {
     vector<int> answer = {4,2,0,3,2,5 };
     cout << solution(answer) << endl;
     return 0;
}


