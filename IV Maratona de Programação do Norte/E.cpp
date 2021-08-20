// C++ implementation of the approach
#include <iostream>
#include <string>
using namespace std;

// Function to return the
// count of sub-strings starting
// from startIndex that are
// also the prefixes of str
int subStringsStartingHere(string str, int n,
							int startIndex)
{
	int count = 0, i = 1;
	while (i <= n)
	{
		if (str.substr(0,i) ==
				str.substr(startIndex, i))
		{
			count++;
		}
		else
			break;
		i++;
	}

	return count;
}


// Function to return the
// count of all possible sub-strings
// of str that are also the prefixes of str
int countSubStrings(string str, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{

		// If current character is equal to
		// the starting character of str
		if (str[i] == str[0])
			count += subStringsStartingHere(str,
										n, i);
	}
	return count;
}

// Driver code
int main()
{
	string str = "xdbrasilybral";
	int n = str.length();

	// Function Call
	cout << (countSubStrings(str, n));
}

// This code is contributed by harshvijeta0
