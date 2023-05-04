#include<iostream>
using namespace std;
void reverse(int arr[], int low, int high)
{
    for (int i = low, j = high; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void rotate(int *input, int d, int n){
     if (d < 0 || d >= n) {
        return;
    }
 
    // Reverse the first `d` elements
    reverse(input, 0, d - 1);
 
    // Reverse the remaining `n-d` elements
    reverse(input, d, n - 1);
 
    // Reverse the whole array
    reverse(input, 0, n - 1);
}

int main() {
     int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}
     return 0;
}