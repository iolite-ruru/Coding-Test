#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <boost/lexical_cast.hpp>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string strNumber = to_string(n);
    for(string::iterator iter = strNumber.end()-1; iter != strNumber.begin()-1; iter--){
        answer.push_back(boost::lexical_cast<int>(*iter));
    }
    return answer;
}
