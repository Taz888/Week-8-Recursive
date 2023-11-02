#include <iostream>
using namespace std;


void stars (int row, int column, int row_end){
	if (row <= row_end){
		if(column <= row){
			cout<<"*";
			column++;
			stars(row, column, row_end);
		} else {
			cout<<endl;
			row++;
			column  = 1;
			stars(row, column, row_end);
		}
	}
}

int main(){
	int row, column, row_end;
	cin>>row_end;
	row = 1;
	column = row;
	stars(row, column, row_end);
}