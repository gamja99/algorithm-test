/* 
#문제설명
문자열 s에 나타나는 문자를 큰것부터 작은 순으로 정렬해주 새로운 문자열을 리턴하는 함수, solution을 완성해주세요. 
s는 영문 대소문자로만 구성되어있으며, 대문자는 ㄴ소문자보다 작은 것으로 간주합니다. 

#제한사항
str은 길이 1 이상인 문자열이다. 
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = s;
    sort(answer.begin(), answer.end(),greater<char>());
    return answer;
}

/*

//다른 분들 코드 참고.
// 굳이 strign answer을 s로 해주지않아도 되는데 왜 굳이 해줫는지 모르겟다.
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s){
  sort(s.begin(), s.end(), greater<char>());
  return s;
 }
 
 */
