

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    //1. 길이로 쳐낸다.
    const size_t length = s.length();
    if(length != 4 && length != 6)
    {
        return false;
    }
    //2. 문자가 있으면 쳐낸다.
    for(size_t i=0; i<length; ++i)
    {
        if(!(s[i] >= '0' && s[i] <= '9'))
        {
            return false;
        }
    }
    return true;
}
