#include <iostream>
#include <string>
#include <stack>

using namespace std;

const char ADD = '+';
const char SUB = '-';
const char MUL = '*';
const char DIV = '/';
const char EXP = '^';
const char OPN = '(';
const char CLS = ')';
const char STR = '#';

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
		case EXP:
			return 50;
		default:
			return 0;
	}
}

bool checkOperator(char c) {
	return (c == ADD || c == SUB || c == MUL || c == DIV || c == EXP);
}

bool checkOperand(char c) {
	return (c >= 'a' && c <= 'z');
}

string convert(string s) {
    stack<char> opr;
    string res = "";
    opr.push(STR);
    for (int i = 0; s[i]; i++) {
        if (checkOperand(s[i]))
        	res += s[i];
        if (checkOperator(s[i])) {
            while(opr.top() != STR && priority(s[i]) <= priority(opr.top())) {
                res += opr.top();
                opr.pop();
            }
            opr.push(s[i]);
        }
        if (s[i] == OPN)
        	opr.push(OPN);
        if (s[i] == CLS) {
            while (opr.top() != STR && opr.top() != OPN) {
            	res += opr.top();
                opr.pop();
            }
            if (opr.top() == OPN)
                opr.pop();
        } 
    }
    while (opr.top() != STR) {
        res += opr.top();
        opr.pop();
    }
	return res;
}

int main() {
	string s;
	int t;
	cin>>t;
	while (t--) {
		cin>>s;
		cout<<convert(s);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
