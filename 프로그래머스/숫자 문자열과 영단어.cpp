#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    string strAnswer = NULL;
    string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            string temp;
            for(int j=i; s[j]>='a'&&s[j]<='z'; j++){
                temp = s.substr(i, j);
                for(int k=0; k<10; k++){
                    if(temp.compare(number[k]) == 0){
                        strAnswer += number[j];
                        break;
                    }
                }
            }
        }else{
            strAnswer += s.at(i);
        }
    }
    answer = stoi(strAnswer);
    return answer;
}
