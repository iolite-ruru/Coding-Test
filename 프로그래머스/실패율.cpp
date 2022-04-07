#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(){
    
}

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

    //정렬->sort()함수 쓰면???
    //sort()
    for(int i=0 ; i<N; i++){
        cout<<rate[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0 ; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(rate[j] > rate[i]){
                int dTemp = rate[j];
                int iTemp = answer[j];
                
                for(int k=N-1; k>i; k--){
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
