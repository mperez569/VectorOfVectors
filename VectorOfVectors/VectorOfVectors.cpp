#include <iostream>
#include <vector>
using namespace std;

//Vector is a dynmic resrvation of memory to put collections
//Most popular Data Structure
int main()
{
	cout << "VECTOR of VECTORS" << endl;

	vector <vector <int>> sales;
	vector <int> temp;

	//----Adding the first row to the Vector of Vectors (sales)
	//adds new value to the vector at the end
	temp.push_back(12);
	temp.push_back(15);
	temp.push_back(18);
	sales.push_back(temp);
	temp.clear();

	temp.push_back(22);
	temp.push_back(25);
	temp.push_back(28);
	sales.push_back(temp);

	int a = sales.size();
	int b = sales[0].size();

	for (int r = 0; r < sales.size(); r++) {
		for (int c = 0; c < sales[0].size(); c++) {
			cout << sales[r][c] << "   ";
		}
		cout << endl;
	}
	cout << endl << endl;

	cout << "Iterating through a Vector" << endl;
	vector <int> numbers;

	numbers.push_back(10);
	numbers.push_back(11);
	numbers.push_back(12);
	numbers.push_back(13);
	numbers.push_back(14);

	for (int n : numbers) {
		cout << n << endl;
	}
}