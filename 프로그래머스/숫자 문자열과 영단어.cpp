#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    string strAnswer = NULL;
    string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int i=0;
    
    //for(int i=0; i<s.length(); i++){
    while(i < s.length()){
        if(s[i]>='a'&&s[i]<='z'){
            string temp;
            bool bFor = true;
            for(int j=1; s[j]>='a'&&s[j]<='z'; j++){
                if(!bFor) break;
                temp = s.substr(i, j);
                for(int k=0; k<10; k++){
                    if(temp.compare(number[k]) == 0){
                        strAnswer.push_back(k);
                        //i = j;
                        bFor = false;
                        break;
                    }
                }
            }
        }else{
            strAnswer.push_back(s.at(i));
        }
        i++; //***while
    }
    answer = stoi(strAnswer);
    return answer;
}
