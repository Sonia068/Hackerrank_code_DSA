// Equal height of three stack :
 int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
      int sum1=0;
      for(int i=0;i<h1.size();i++){
          sum1=sum1+h1[i];
      }
      
      int sum2=0;
      for(int i=0;i<h2.size();i++){
          sum2=sum2+h2[i];
      }
      
      int sum3=0;
      for(int i=0;i<h3.size();i++){
          sum3=sum3+h3[i];
      }
      
      size_t i1=0,i2=0,i3=0;
      
      while(true){
        
        if(i1==h1.size() || i2==h2.size() ||i3==h3.size()){
            return 0;
        }
                if(sum1==sum2 && sum2==sum3){
                   return sum1;
              }
      
        if(sum1>=sum2 && sum1>=sum3){
            sum1=sum1-h1[i1];
            i1++;   
        }
        
         else if(sum2>=sum1 && sum2>=sum3){
            sum2=sum2-h2[i2];
            i2++;   
        }
        
          else {
            sum3=sum3-h3[i3];
            i3++;   
        }
      }
      }