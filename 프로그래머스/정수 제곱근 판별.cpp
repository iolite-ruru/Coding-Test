#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    double x = sqrt(n);
    if(x == (int)x){ //*****
        return pow(x+1, 2);
    }else{
        return -1;
    }
}
