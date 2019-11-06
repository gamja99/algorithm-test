/* 
# 문제설명
수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다.
수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다. 

1번 수포자가 찍는 방식: 1,2,3,4,5,1,2,3,4,5 ...
2번 수포자가 찍는 방식: 2,1,2,3,2,4,2,5,2,1,2,3,2,4,2,5 ...
3번 수포자가 찍는 방식: 3,3,1,1,2,2,4,4,5,5,3,3,1,1,2,2,4,4,5,5 ...

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 
가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution함수를 작성하시오. 

#제한 조건
1. 시험은 최대 10,000문제로 구성되어있다. 
2. 문제의 정답은 1,2,3,4,5 중 하나이다. 
3. 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차 순으로 정렬해주세요. 

*/

#include <string>
#include <vector>

using namespace std;

int n1[5] = {1,2,3,4,5};
int n2[8] = {2,1,2,3,2,4,2,5};
int n3[10] = {3,3,1,1,2,2,4,4,5,5};

int max(int x, int y){
    return x < y ? y : x;
}

vector<int> solution(vector<int> answers) {
    int val = 0;
    vector<int> answer;
    vector<int> count(3);
    
    for(int i=0; i<answers.size();i++){
        if(n1[i%5] == answers[i]) count[0]++;
        if(n2[i%8] == answers[i]) count[1]++;
        if(n3[i%10] == answers[i]) count[2]++;
    }
    
    val = max(max(count[0],count[1]),count[2]);
    
    for(int i=0; i<3; i++){
        if(count[i] == val) answer.push_back(i+1);
    }
    return answer;
}
