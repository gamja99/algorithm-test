#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
 
using namespace std;
 
int solution(string dartResult) {
    int answer = 0;
    char *temp;
    temp = (char*)dartResult.c_str();
 
    vector<string> score;
    vector<int> scoreN;
    scoreN.push_back(0);
 
    for (int i = 0; i < dartResult.size(); i++) {
        if (temp[i] >= '0' && temp[i] <= '9') {
            string tmp;
            tmp += temp[i];
            score.push_back(tmp);
            if (temp[i + 1] >= '0' && temp[i + 1] <= '9') {
                score[score.size() - 1] += temp[i + 1];
                scoreN.push_back(atoi(score[score.size() - 1].c_str()));
                i++;
            }
            else {
                scoreN.push_back(atoi(score[score.size() - 1].c_str()));
            }
        }
        else if (temp[i] == 'D') {
            scoreN[scoreN.size()-1] = pow(scoreN[scoreN.size()-1], 2);
        }
        else if (temp[i] == 'T') {
            scoreN[scoreN.size()-1] = pow(scoreN[scoreN.size()-1], 3);
        }
        else if (temp[i] == '*') {
            scoreN[scoreN.size() - 2] = scoreN[scoreN.size() - 2] * 2;
            scoreN[scoreN.size()-1] = scoreN[scoreN.size()-1] * 2;
        }
        else if (temp[i] == '#') {
            scoreN[scoreN.size()-1] = -scoreN[scoreN.size()-1];
        }
    }
    for (int i = 0; i < scoreN.size(); i++) {
        answer += scoreN[i];
    }
    return answer;
}
