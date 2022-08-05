#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector <pair<string, int>> totalAthlete;
    sort(participant.begin(), participant.end());
    int index = -1;
    for (int i = 0; i < participant.size(); i++)
    {
        if (i > 0 && participant[i] == participant[i - 1]) totalAthlete[index].second++;
        else
        {
            totalAthlete.push_back(make_pair(participant[i], 1));
            index++;
        }
    }
    for (int i = 0; i < completion.size(); i++)
    {
        for (int k = 0; k < totalAthlete.size(); k++)
        {
            if (totalAthlete[k].first == completion[i])
            {
                totalAthlete[k].second -= 1;
                break;
            }
        }
    }
    for (int i = 0; i < totalAthlete.size(); i++) if (totalAthlete[i].second == 1) return totalAthlete[i].first;
    return answer;
}

int main()
{
    vector<string> participant = { "mislav", "stanko", "mislav", "ana" };
    vector<string> completion = { "stanko", "ana", "mislav" };
    cout << solution(participant, completion) << endl;
    return 0;
}

