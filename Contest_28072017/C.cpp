#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

const char ADD = '+';
const char SUB = '-';
const char MUL = '*';
const char DIV = '/';
const char OPN = '(';
const char CLS = ')';
const char STR = '#';
const char EON = '|';

int priority(char c) {
	switch (c) {
		case ADD:
			return 10;
		case SUB:
			return 10;
		case MUL:
			return 20;
		case DIV:
			return 20;
		default:
			return 0;
	}
}

bool checkOperator(char c) {
	return (c == ADD || c == SUB || c == MUL || c == DIV);
}

bool checkOperand(char c) {
	return (c >= '0' && c <= '9');
}

string convert(string s) {
    stack<char> opr;
    stack<char> num;
    string res = "";
    opr.push(STR);
    for (int i = 0; s[i]; i++) {
        if (checkOperand(s[i]))
        	num.push(s[i]);
        if (checkOperator(s[i])) {
        	if (!num.empty()) {
        		while (!num.empty()) {
        			res += num.top();
        			num.pop();
				}
				res += EON;
			}
			while(opr.top() != STR && priority(s[i]) <= priority(opr.top())) {
                res += opr.top();
            	opr.pop();
        	}
          	opr.push(s[i]);
        } 
        if (s[i] == OPN)
        	opr.push(OPN);
        if (s[i] == CLS) {
        	if (!num.empty()) {
        		while (!num.empty()) {
        			res += num.top();
        			num.pop();
				}
				res += EON;
			}
            while (opr.top() != STR && opr.top() != OPN) {
            	res += opr.top();
                opr.pop();
            }
            if (opr.top() == OPN)
                opr.pop();
        } 
    }
    if (!num.empty()) {
        while (!num.empty()) {
        	res += num.top();
        	num.pop();
		}
		res += EON;
	}
    while (opr.top() != STR) {
        res += opr.top();
        opr.pop();
    }
	return res;
}

long long calculate(string s) {
	string exp = convert(s);
	long long tmp = 0;
	stack<long long> st;
	int e = 0;
	for (int i = 0; exp[i]; i++) {
		if (exp[i] == EON) {
			st.push(tmp);
			tmp = 0;
			e = 0;	
		} else if (checkOperator(exp[i])) {
			long long v1 = st.top();
			st.pop();
			long long v2 = st.top();
			st.pop();
			switch (exp[i]) {
				case ADD: {
					st.push(v2 + v1);
					break;
				}
				case SUB: {
					st.push(v2 - v1);
					break;
				}
				case MUL: {
					st.push(v2 * v1);
					break;
				}
				case DIV: {
					st.push(v2 / v1);
					break;
				}
			}
		} else {
			tmp += (exp[i] - 48)*pow(10, e);
			e++;
		}
	}
	return st.top();
}

int main() {
	int t;
	cin>>t;
	string s;
	while (t--) {
		cin>>s;
		cout<<calculate(s);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
