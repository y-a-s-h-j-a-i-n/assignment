#include<iostream>
#include<vector>

using namespace std;


class Matrix
{
	int rows;
	int columns;
	vector<vector<int> >matrix;
public:
	//parametrized constructor
	Matrix(int _rows, int _columns) :rows(_rows), columns(_columns),
		matrix(rows, vector<int>(columns)){}


	int getRows() {return rows;}
	int getColumns() {return columns;}


	void setElemnt(int i, int j)
	{
		cout << "Please, enter a value for position ["<<i<<"]["<<j<<"]: ";
		cin >> matrix[i][j];
	}
	friend Matrix operator+(Matrix& x, Matrix& y);
	friend Matrix operator*(Matrix& x, Matrix& y);
	void Display()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j <columns; j++)
			{
				cout<<matrix[i][j]<<" ";
			}
			cout << endl;
		}
	}
};

Matrix operator+(Matrix& x, Matrix& y)
{
	Matrix temp(x.rows,x.columns);
	for (int i = 0; i < x.rows; i++)
	{
		for (int j = 0; j < x.columns; j++)
		{
			temp.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
		}
	}
	return temp;
}
Matrix operator*(Matrix& x, Matrix& y)
{
	Matrix temp(x.rows, x.columns);
	for (int i = 0; i < x.rows; i++)
	{
		for (int j = 0; j < x.columns; j++)
		{
			temp.matrix[i][j] = x.matrix[i][j] * y.matrix[i][j];
		}
	}
	return temp;
}

int main()
{
	int rws, clmns;
	cout << "Please, enter the number of rows for matrixes: ";
	cin >> rws;
	cout << "Please, enter the number of columns for matrixes: ";
	cin >> clmns;
	Matrix a(rws,clmns);
	cout << "Enter elements for the first matrix:\n";
	for (int i = 0; i < a.getRows(); i++)
	{
		for (int j = 0; j < a.getColumns(); j++)
		{
			a.setElemnt(i, j);
		}
	}
	a.Display();

	Matrix b(rws, clmns);
	cout << "Enter elements for the second matrix:\n";
	for (int i = 0; i < b.getRows(); i++)
	{
		for (int j = 0; j < b.getColumns(); j++)
		{
			b.setElemnt(i, j);
		}
	}
	b.Display();
	cout << "\nResult of adding two matrixes:\n";
	Matrix c = a + b;
	c.Display();
	Matrix d = a*b;
	cout << "\nResult of multiplying two matrixes:\n";
	d.Display();
}
