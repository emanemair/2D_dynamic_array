#include<iostream>
using namespace std; 


void fill_2D_array(int** p, int rows, int columns); 
void print_2D_array(int** p, int rows, int columns); 


int main() {

	int** items; 
	int rows, columns = 0; 
	cout << "enter size of ( row , columns )  " << endl; 
	cin >> rows >> columns; 


	items = new int* [rows]; 
	for (int row = 0; row < rows; row++)
	{
		items[row] = new int[columns];
	}



	return 0; 
}



void fill_2D_array(int** p, int rows, int columns) {
	for (int row = 0; row < rows; row++)
	{
		cout << "enter " << columns << " number to inset into the row number " << row << "\n"; 
		for (int column = 0; column < columns; column++)
		{
			cin >> p[row][column]; 
		}
	 }
}


void print_2D_array(int** p, int rows, int columns) {
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			cout << p[row][column];
		}
		cout << "\n"; 
	}

}


