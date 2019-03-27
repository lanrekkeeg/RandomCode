/*
Big number addition
Big number multiplication



*/
/*

	check whether a big number is palindrome or not
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


void pair(vector<int>&pair, int ord) {

	for (int i = 0; i < pair.size(); i++)
		for (int j = i; j < pair.size(); j++) {

		}

}

int getInt(char ch) {
	return ch - '0';
}
bool is_palindrome(string str) {

	char *st = &str[0];
	char *ls = &str[str.size() - 1];
	
}
void big_number(string str, string str2) {

	string num_1, num_2,result = "";
	if (str > str2) {
		num_1 = str;
		num_2 = str2;
	}
	else {
		num_1 = str2;
		num_2 = str;
	}
	int l_1= num_1.size()-1, l_2 = num_2.size()-1;
	int val_1, val_2, carry = 0;
	int re = 0;
	while ( 0 <= l_1 ||  0 <= l_2) {
		if (l_1 >= 0) {
			val_1 = getInt(num_1[l_1]);
			l_1--;
		}
		else {
			val_1 = 0;
		}
		if (l_2 >= 0) {
			val_2 = getInt(num_2[l_2]);
			l_2--;
		}
		else {
			val_2 = 0;
		}
		re = val_1 + val_2 + carry;
		if (re >= 10) {
			carry = re / 10;
			char ch = char(((re % 10) + '0'));
			result = ch + result;

		}
		else {
			carry = 0;
			char ch = char(( re + '0'));
			result = ch + result;
		}
	}
	if (carry > 0) {
		char ch = char((carry + '0'));
		result = ch + result;
	}
	cout << result << endl;
}

int main() {

	string str, str2;
	cin >> str >> str2;
	big_number(str, str2);

}