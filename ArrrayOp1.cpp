#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Array size must be greater than zero." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    
	cout << "\nMinimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;
    
    return 0;
}
