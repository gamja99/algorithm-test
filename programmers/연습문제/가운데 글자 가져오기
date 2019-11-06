/*
#문제설명
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어보세요.
단어의 길이가 짝수라면 가운데 두 글자를 반환하면 된다. 

#제한사항
1. s는 길이가 1 이상 100 이하인 스트링이다. 
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    
    if(size % 2 == 1 ){ //홀수
        answer =  s[size/2];
    }
    else{
        answer = s[size/2 -1];
        answer += s[size/2];
    }
    return answer;
}
