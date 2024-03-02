// C++ Program to print the fibonacci series
// using iteration (loops)
#include <iostream>
using namespace std;

// Function to print fibonacci series
void printFib(int n)
{
	if (n < 1) {
		cout << "Invalid Number of terms\n";
		return;
	}

	// When number of terms is greater than 0
	int prev1 = 1;
	int prev2 = 0;

	// For loop to print fibonacci series
	for (int i = 1; i <= n; i++) {
		if (i > 2) {
			int num = prev1 + prev2;
			prev2 = prev1;
			prev1 = num;
			cout << num << " ";
		}

		// For first two terms
		if (i == 1) {
			cout << prev2 << " ";
		}
		if (i == 2) {
			cout << prev1 << " ";
		}
	}
}

// Driver code
int main()
{

	cout<<(int)(-0.5);
	return 0;
}
