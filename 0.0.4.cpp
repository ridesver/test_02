#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int **a, n, m, i, j, b, k = 1, c = 0; 
	char op;
	cout << "Enter the size: \n";
	string str;
	getline(cin, str);
	istringstream stream(str);
	if (stream >> n && stream >> op && op == ',' && stream >> m) 
	{
		a = new int*[n];
		for (i = 0; i < n; i++)
			*(a + i) = new int[m];
		b = n * m;

		while (k <= n * m)
		{
			for (j = c; j < m - c; j++)
			{
				if (k > b)
					break;
				a[c][j] = k++;
			}
			for (i = c + 1; i < n - c; i++)
			{
				if (k > b)
					break;
				a[i][m - c - 1] = k++;
			}
			for (j = m - c - 2; j >= c; j--)
			{
				if (k > b)
					break;
				a[n - c - 1][j] = k++;
			}
			for (i = n - c - 2; i > c; i--)
			{
				if (k > b)
					break;
				a[i][c] = k++;
			}
			c++;
		}
		cout << "Result: \n";
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m - 1; j++)
				if (a[i][j] < 10)
					cout << a[i][j] << "  ";
				else 
					cout << a[i][j] << " ";

				cout << a[i][m - 1] << "\n";
		}
		for (i = 0; i < n; i++)
			delete[] a[i];
		delete[] a;
	}
	else cout << "An error has occurred while reading input data. \n";
	return 0;
}
