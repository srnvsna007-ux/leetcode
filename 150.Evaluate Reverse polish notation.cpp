class Solution {
public:
int evalRPN(vector<string>& tokens) {
    stack<int> s;

    for (string x : tokens) {
        if (x == "+" || x == "-" || x == "*" || x == "/") {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            switch (x[0]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a-b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
        else
            s.push(stoi(x));
    }

    return s.top();
}

 };
