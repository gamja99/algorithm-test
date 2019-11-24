#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i = 1; i<arr.size(); i++){
        if(arr[i]==arr[i-1]){
            continue;
        }
        else{
            answer.push_back(arr[i-1]);
        }
    }
    answer.push_back(arr[arr.size()-1]);
    return answer;
}
