#include<stdio.h>
#include<iostream>


using namespace std;

int F(int x){
	int temp=0, sum=0;
	temp = x/16;
	while(x != 0){
		temp = x%16;
		sum+=temp;
		x/=16;
	}
	return sum;
}

int gcd(int a, int b){
	if(a==0) return b;
	else if(b==0) return a;
	return (a>b)? gcd(a%b,b): gcd(a,b%a);
}

int findCount(int L, int R){
	int count = 0;
	for(int i=L; i<R+1; i++){
		if(gcd(i,F(i))>1) count++;
	}
	return count;
}


int main(){
	int T, L, R;
	cin>>T;
	while(T--){
		cin >> L >> R;
		cout << findCount(L,R) << endl;
	}
}