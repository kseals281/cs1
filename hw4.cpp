#include <iostream>

using namespace std;

void delete_repeats( char a[], int& letters );

int main()
{
	int letters = 6;

	char a[15] = { 'f', 'o', 'l', 'l', 'o', 'w' };

	delete_repeats( a, letters );

	for( int i = 0; i < letters; i++ )
	{
		cout << a[i];
	}

	cout << endl;

	return 0;

}

void delete_repeats( char a[], int& letters )
{
	for( int i = 0; i < letters; i++ )
	{
		for( int x = i + 1; x < letters; x++ )
		{
			if( a[i] == a[x] )
			{
				for( int y = x; y < letters; y++ )
				{
					a[y] = a[y + 1];
				}

				letters - 1;
			}
		}
	}
}