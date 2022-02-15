#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=0; i<strlen(s); i++){
        if(s[i]>="a"&&s[i]<="z"){
            string temp;
            for(int j=i; s[j]>="a"&&s[j]<="z"; j++){
                temp = 
                for(int k=0; k<10; k++){
                    if(strcmp(temp, number[k])==0){
                        break;
                    }
                }
                
            }
        }
    }
    return answer;
}
