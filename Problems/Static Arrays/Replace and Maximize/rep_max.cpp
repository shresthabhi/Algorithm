#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<pair<int, int>> findNbrs(const int &board_size, int i, int j){
	vector<pair<int, int>> nbrs;
	
	if(j != 0) nbrs.append({i,j-1}); // left nbr
	if(j != board_size-1) nbrs.append({i,j+1}); // right nbr
	if(i != 0) nbrs.append({i-1, j}); // top nbr
	if(i != board_size-1) nbrs.append({i+1,j}); // bottom nbr

	return nbrs;
}




int main() {

	int H;
	cin >> H;
	int board[][] = new int[H][H];

	//Input for the board
	for(int i=0; i<H; i++){
		for(int j=0; j<H; j++){
			cin>>H[i][j];
		}
	}



}