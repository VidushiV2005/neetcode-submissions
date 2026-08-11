class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int> c;
      for(auto t:tokens){
        if(t=="+" || t=="-" || t=="*" ||t=="/"){

            int b;
            b=c.top();
            c.pop();
            int a;
            a=c.top();
            c.pop();
            
            if(t=="+"){
                c.push(a+b);
            }
            if(t=="-"){
                c.push(a-b);
            }
            if(t=="*"){
                c.push(a*b);
            }
            if(t=="/"){
                c.push(a/b);
            }
        }
        else{
            c.push(stoi(t));
        }
      }
      return c.top();  
    }
};
