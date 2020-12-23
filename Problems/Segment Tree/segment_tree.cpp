#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

#define vi vector<int>
#define REP(i,a,b) for(int i = int(a); i <= int(b); i++)
#define REP_(i,a,b) for(int i = int(a); i >= int(b); i--)

using namespace std;


void print_arr(const int A[], int n){
	REP(i,0,n-1){
		cout << A[i] << " ";
	}
	cout << endl;
}

class SegmentTree{
private:
	vi st, st_sum, A;
	int n;
	int left(int p){ return p << 1; }
	int right(int p){return (p << 1) + 1;}

	void build(int p, int L, int R){
		if(L == R){
			st[p] = L;
			st_sum[p] = A[L];
			return;
		} else {
			build(left(p), L, (L+R)/2);
			build(right(p), (L+R)/2 + 1, R);

			int p1 = st[left(p)], p2 = st[right(p)];
			int pl_sum = st_sum[left(p)], pr_sum = st_sum[right(p)];

			st_sum[p] = pl_sum + pr_sum;
			st[p] = (A[p1]<=A[p2]) ? p1: p2;


		}

	}

	int rmq(int p, int L, int R, int i, int j){
		if(i > R || j<L) return -1;
		if(L >= i && j >= R) return st[p];

		int pl = rmq(left(p), L, (L+R)/2, i, j);
		int pr = rmq(right(p), (L+R)/2 + 1, R, i, j);

		if(pl == -1) return pr;
		if(pr == -1) return pl;

		return (A[pl] <= A[pr]) ? pl : pr;
	}

	int rsq(int p, int L, int R, int i, int j){
		if(i > R || j < L) return 0;
		if(i <= L && j >= R) return st_sum[p];

		int pl_sum = rsq(left(p), L, (L+R)/2, i, j);
		int pr_sum = rsq(right(p), (L+R)/2 + 1, R, i, j);

		return pl_sum + pr_sum;

	}
public:
	SegmentTree(const vi &_A) {
		A = _A; 
		n = (int)A.size();
		st.assign(2*n, 0);
		st_sum.assign(2*n, 0);
		build(1,0,n-1);

	}

	int rmq(int i, int j) { return rmq(1, 0, n-1, i, j);}
	int rsq(int i, int j) { return rsq(1, 0, n-1, i ,j);}
};

int main(){

	int arr[] = {10, 2, 47, 3, 7, 9, 1, 98, 21}; 
	vi A(arr, arr + 9);
	SegmentTree st(A);
	print_arr(arr, 9);
	printf("RMQ(1, 7) = %d\n", st.rmq(1, 7));
	printf("RMQ(3, 8) = %d\n", st.rmq(3, 8));
	printf("RSQ(1, 7) = %d\n", st.rsq(1, 7));
	printf("RSQ(3, 8) = %d\n", st.rsq(3, 8));
	return 0;
}