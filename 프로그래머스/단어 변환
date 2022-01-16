#include <string>
#include <vector>

using namespace std;
void DFS(string begin, string target, vector<string>words, int& answer, vector<bool> chk, int cnt = 0){
    for(int i=0; i<words.size(); i++){
        int dif = 0;
        for(int j=0; j<words[i].length(); j++){
            if(!chk[i] && begin[j] != words[i][j]) dif++;
        }
        if(dif == 1){
            if(target == words[i] && answer > cnt+1){
                answer = cnt+1;
                return;
            }
            chk[i] = true;
            DFS(words[i], target, words, answer, chk, cnt+1);
            //chk[i] = false;
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    int answer = 1001;
    vector<bool> chk(words.size(), false);
    DFS(begin, target, words, answer, chk);
    if(answer == 1001) answer = 0;
    return answer;
}
