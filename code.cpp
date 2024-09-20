#include <iostream>
#include <stack>
using namespace std;

int precedence (char a){
    if (a == '+' || a == '-'){
        return 1;
    }
    else if (a == '/' || a == '*'){
        return 2;
    }
    return -1;
}

int main(){
    string expression = "X+Y*Z/W+U";

    reverse(expression.begin(),expression.end());
    cout<<"Reversed expression= "<<expression<<endl;

    stack<char> s;
    string prefix="";
    int prectop=0;
    int precin=0;
    
    for (int i=0;i<expression.size();i++){
        if (expression[i] == ')'){
            s.push(')');
        }

        else if (expression[i]>='A' && expression[i]<='Z'){
            prefix+=expression[i];
        }

        else if (expression[i]=='+' || expression[i]=='-' || expression[i]=='*' || expression[i]=='/'){
            while (!s.empty() && precedence(s.top()) > precedence(expression[i])) {
                prefix += s.top();
                s.pop();
            }
            s.push(expression[i]);
        }

        else if (expression[i] == '(') {
            while (!s.empty() && s.top() != ')') {
                prefix += s.top();
                s.pop();
            }
            s.pop();  // Pop the ')'
        }
    }

    while (!s.empty()){
        prefix+=s.top();
        s.pop();
    }

    reverse(prefix.begin(),prefix.end());

    cout<<"Prefix expression= "<<prefix<<endl;
}