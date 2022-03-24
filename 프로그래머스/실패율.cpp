#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> rate;
    for(int i=1; i<=N; i++){
        int notSuccess = 0;
        int arrival = 0;
        for(int j=0; j<stages.size(); j++){
            if(stages[j] > i){
                arrival++;
            }
            else if(stages[j] == i){
                notSuccess++;
                arrival++;
            }
        }
        //if(arrival == 0) break;
        answer.push_back(i);
        rate.push_back((double)notSuccess / arrival);
        cout<<rate[i-1]<<endl;
    }

    for(int i=0 ; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(rate[j] > rate[i]){
                double dTemp = rate[i];
                rate[i] = rate[j];
                rate[j] = dTemp;
                
                int iTemp = answer[i];
                answer[i] = answer[j];
                answer[j] = iTemp;
                
            }
        }
    }
    
    return answer;
}
