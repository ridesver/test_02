#include <iostream>
#include <sstream>

using namespace std;
int k;
int main() 
{
    int a, b, c=0;
    string str, k1, k2;
    getline(cin, k1);
    istringstream stream(k1);
    if (!(stream >> a)) 
    {
        cout << "An error has occuried while reading input data.";
        return 0;
    }

    getline(cin, str);
    istringstream str1(str);
    int *A = new int[a];
    for (int i = 0; i < a; i++) 
    {
        if (!(str1 >> A[i])) 
        {
            cout << "An error has occuried while reading input data.";
            return 0;
        }
    }
    
    getline(cin, k2);
    istringstream str2(k2);
    if (!(str2 >> b)) 
    {
        cout << "An error has occuried while reading input data.";
        return 0;
    }
    
    for ( int i = b; i < a/2+b-1; i++) 
    {
      swap( A[i], A[a-c-1]);
      c++;
    }
    c=0;
    for ( int j = 0; j < b/2 ; j++) 
    {
      swap(A[j], A[b-c-1]);
      c++;
    }
    for ( int y = 0; y < a/2 ; y++) 
    {
      swap(A[y], A[a-y-1]);
    }
    c=0;
    for (int i = 0; i < a; i++) 
    {
      cout << A[i] << ' ';
     }
    return 0;
}
