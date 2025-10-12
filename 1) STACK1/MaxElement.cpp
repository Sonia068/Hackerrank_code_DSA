//Maximum Element :
vector<int> getMax(vector<string> operations) {
     vector<int>st1;
     vector<int>res;
     for(size_t i=0;i<operations.size();i++){
          if(operations[i][0]=='1'){
            int s=stoi(operations[i].substr(2));
            st1.push_back(s);
          }
          
          if(operations[i][0]=='2'){
            st1.pop_back();
          }
          
          if(operations[i][0]=='3'){
            int maxValue=st1[0];
            for(size_t j=0;j<st1.size();j++){ 
               if(st1[j]>maxValue){
                  maxValue=st1[j];
               }
            }
               res.push_back(maxValue);
            }
          }
     
               return res;
          
};