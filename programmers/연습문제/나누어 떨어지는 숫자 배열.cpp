/*
#문제설명
array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요. 
divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요. 

#제한사항
1. arr은 자연수를 담은 배열입니다. 
2. 정수 i,j에 대해 i≠j 이면 arr[i]≠arr[j]이다. 
3. divisor은 자연수이다. 
4. array는 길이 1 이상인 배열이다. 
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.size() == 0){ //answer에 값이 없다 == divisor로 나누어 떨어지는 element가 하나도 없다.
        answer.push_back(-1);
    }
    else {
        sort(answer.begin(), answer.end()); //오름차순으로 정렬
    }
    return answer;
}
