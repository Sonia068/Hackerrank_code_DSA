// Balanced Bracket Function :

string isBalanced(string s) {
    stack<char>st1;
    
      if(s.empty()){
        return " ";
     }
      else{
         for(int i=0;i<s.length();i++){
               if(s[i]=='{' ||s[i]=='(' ||s[i]=='['){
                   st1.push(s[i]);
               }
               
               else {
                if(st1.empty()){
                    return "NO";
                }
                
                if(s[i]==')' &&st1.top()=='('){
                     st1.pop();
               }
               
                else if(s[i]=='}' &&st1.top()=='{'){
                     st1.pop();
                     
               }
                else if(s[i]==']' &&st1.top()=='['){
                      st1.pop();
               }
               
                else{
                   return "NO";
               }
               }
               }
               }
               
               if(st1.empty()){
                   return "YES";
               }
               else{
                 return "NO";
               }

            }
              