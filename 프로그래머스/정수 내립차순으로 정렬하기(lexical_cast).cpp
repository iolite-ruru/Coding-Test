#include <string>
#include <vector>
#include <boost/lexical_cast.hpp>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string strN = boost::lexical_cast<string>(n);
    sort(strN.begin(), strN.end(), greater<>());
    answer = boost::lexical_cast<long long>(strN);
    
    return answer;
}
