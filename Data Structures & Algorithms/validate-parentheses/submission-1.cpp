class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(auto t:s){
            if(t=='(' || t=='{' || t=='['){
                c.push(t);
            }
            else{
                if(c.empty()){
                    return false;
                }
                char top=c.top();
                if(t==')' && top!='(' ||t=='}' && top!='{'||t==']' && top!='['){
                    return false;
                }
                c.pop();
            }
        }
        return c.empty();
    }
};
