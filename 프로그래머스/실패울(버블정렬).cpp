#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

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
        
        answer.push_back(i);
        rate.push_back((double)notSuccess / arrival);
    }

    for(int i=0 ; i<N; i++){
        cout<<rate[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0 ; i<N; i++){
        for(int j=0; j<N-i; j++){
            if(rate[j] < rate[j+1]){
                int dTemp = rate[j+1];
                int iTemp = answer[j+1];
                
                for(int k=j+1; k>i; k--){
                    rate[k] = rate[k-1];
                    answer[k] = answer[k-1];
                }
                
                rate[i] = dTemp;
                answer[i] = iTemp;
                break;
            }
        }
    }
   
    for(int i=0 ; i<N; i++) cout<<answer[i]<<endl;
    
    return answer;
}
