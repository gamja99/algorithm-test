#include <string>
#include <vector>
#include <string.h>
#include <algorithm>
 
using namespace std;
 
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    int C = 0;
    int max;
    int maxi;
    vector<int> use;
    vector<string> cache;
    for (int i = 0; i < cities.size(); i++) {
        if(cacheSize == 0){
            answer += 5;
        }
        else if (i == 0) {
            cache.push_back(cities[i]);
            use.push_back(0);
            answer += 5;
        }
        else if (cache.size() < cacheSize) {
            for (int j = 0; j < cache.size(); j++) {
                if (strcasecmp(cache[j].c_str(), cities[i].c_str()) == 0) {
                    answer += 1;
                    C = j;
                    break;
                }
                else if (j == cache.size() - 1) {
                    cache.push_back(cities[i]);
                    use.push_back(0);
                    answer += 5;
                    C = j+1;
                    break;
                }
            }
        }
        else {
            for (int j = 0; j < cache.size(); j++) {
                if (strcasecmp(cache[j].c_str(), cities[i].c_str()) == 0) {
                    answer += 1;
                    C = j;
                    break;
                }
                else if (j == cache.size() - 1){
                    answer += 5;
                    maxi = std::max_element(use.begin(), use.end()) - use.begin();
                    cache[maxi] = cities[i];
                    C = maxi;
                }
            }
        }
        for (int j = 0; j < cache.size(); j++) {
            if (j == C) {
                use[j] = 0;
                continue;
            }
            use[j]++;
        }
    }
    return answer;
}
