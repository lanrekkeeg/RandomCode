#include<stack>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string infixTopost(stack<char>&opera, string str) {
	int i = 0;
	int left_brac = 0;
	string con = "";
	while (i < str.size()) {

		if (str[i] == '(')left_brac++;

		if (str[i] == ')') {
			left_brac--;
			char ope = opera.top();
			opera.pop();
			con += ope;
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
			str[i] == '/' || str[i] == '^') {

			opera.push(str[i]);
		}
		if (str[i] >= 97 && str[i] <= 122) {
			
			con += str[i];
		}
		i++;
	}
	return con;
}

int main() {
	stack<char>opera;
	string str = " ";
	infixTopost(sol, opera, str);
	string polish = "";
	int i = 1, length = 0;
	cin >> length;

	while (i <= length) {
		cin >> str;
		cout<< infixTopost(sol, opera, str)<<endl;
		i++;
	}
	
	
}