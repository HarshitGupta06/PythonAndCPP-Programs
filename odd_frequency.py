// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the xor of
// elements having odd frequency
int xorOdd(int arr[], int n)
{
	// To store the frequency
	// of all the elements
	unordered_map<int, int> m;

	// Update the map with the
	// frequency of the elements
	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	// To store the XOR of the elements
	// appearing odd number of
	// times in the array
	int xorArr = 0;

	// Traverse the map using an iterator
	for (auto it = m.begin(); it != m.end(); it++) {

		// Check for odd frequency
		// and update the xor
		if ((it->second) & 1) {
			xorArr ^= it->first;
		}
	}

	return xorArr;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 1, 3, 3, 4, 2, 3, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << xorOdd(arr, n);

	return 0;
}
