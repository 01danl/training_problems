/*
 * For given n output the array in down-to-up and right-to-left way. Look at the example for n = 4:
16 12 8 4
15 11 7 3
14 10 6 2
13  9 5 1

Input:
Only one number - n(1<=N<=100).


Output:
The two dimention matrix in format described above.


Sample input:
3


Sample output:
9 6 3
8 5 2
7 4 1
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int n_power2 = n * n;
	int count = 0;

	for (int j=0; j<n; j++) {
		for (int i=0; i<n; i++) {
			arr[i][j] = n_power2 - count;
		       	count ++;
		}
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
