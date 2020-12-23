#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i = int(a); i <= int(b); i++)

bool opposite_match(char a, char b){
	if(a=='[') return b == ']';
	if(a=='(') return b == ')';
	return 0;}

int main() {

	// freopen("input_file.txt", "r", stdin);
	// freopen("output_file.txt", "w", stdout);

	int N, iter=0;
	string s;
	char c;
	scanf("%d\n", &N);
	while(N--){
		getline(cin,s);
		if(s==""){printf("Yes\n");continue;}
		stack<char> parantheses;
		parantheses.push(s[0]);
		REP(i,1,s.length()-1){
			if(!parantheses.empty() && opposite_match(parantheses.top(),s[i])){
				parantheses.pop();
			} 
			else {
			parantheses.push(s[i]);
			}
		}
		if(parantheses.empty()) printf("Yes\n"); else printf("No\n");
	}

	return 0;
}