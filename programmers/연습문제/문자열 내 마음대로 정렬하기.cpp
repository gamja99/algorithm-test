/*
#문제설명
문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 
예를 들어 strings가 ["sun", "bed", "car"]이고 n이 1이면 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬합니다. 

#제한조건
1. stirngs는 길이 1 이상, 50이하인 배열이다. 
2. strings의 원소는 소문자 알파벳으로 이루어져 있다. 
3. strings의 원소는 길이 1 이상, 100이하인 문자열이다. 
4. 모든 strings의 원소의 길이는 n보다 크다. 
5. 인덱스 1의 문자가 같은 문자열이 여럿일 경우, 사전순으로 앞선 무자열이 앞쪽에 위치한다. 
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int I; //index

bool asort(string x, string y){
    if(x.at(I) != y.at(I)){
        return x.at(I) < y.at(I);
    }
    else{
        return x < y;
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    answer = strings;
    I = n;
    sort(answer.begin(), answer.end(), asort);
    return answer;
}
