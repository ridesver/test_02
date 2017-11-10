#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void select(int *a, int b)
{
	for(int i=0; i< b/2; i++)
		swap(a[i],a[b-i-1]);
}
bool numbers(int *a, int b)
{
  cout << "Enter elements: \n";
  string k;
  getline(cin, k);
  istringstream stream(k);
  bool c = true;
	for (int i = 0; i < b; i++) 
	{
		if (!(stream >> a[i])) 
		{
			c = false;
			break;
		}
	}
	return c;
}

int main() 
{
	int *a, b;
	cout << "Enter the number of elements: \n";
	cin >> b;
	cin.get();
	a = new int [b];
	if (numbers(a, b)) 
	{
		select(a, b);
		cout << "Result: \n";
		for (int i = 0; i < b; i++) 
		{
			cout << a[i] << " ";
		}
	}
	else cout << "An error has occured while reading input data.";
	return 0;
}
