#include <iostream>

using namespace std;

void delete_repeats( char a[], int& letters );

int main()
{
	int letters = 8;

	char a[15] = { 'f', 'o', 'l', 'l', 'l', 'l', 'l', 'l'};

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
	for( int i = 1; i < letters; i++ )
	{
		for( int x = i; x < letters; ++x )
		{
			if( a[i - 1] == a[x] )
			{
				for( int y = x; y < letters; y++ )
				{
					a[y] = a[y + 1];
				}

				letters -= 1;
			}
		}
	}

	a[letters - 1] = 0;
	
}