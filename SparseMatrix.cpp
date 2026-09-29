#include <iostream>
#include <vector>

using namespace std;

int main() {
    int sparsematrix[4][5];

    cout << "Enter elements of the 4x5 sparse matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> sparsematrix[i][j];
        }
    }

    // Step 1: Count non-zero elements (renamed 'size' to 'non_zero_count')
    int non_zero_count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparsematrix[i][j] != 0) {
                non_zero_count++;
            }
        }
    }

    // Step 2: Create and populate the triplet matrix if non-zero elements exist
    if (non_zero_count > 0) {
        // Added space between '>' '>' for older compiler compatibility
        vector<vector<int> > Dmatrix(3, vector<int>(non_zero_count));
        int k = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 5; j++) {
                if (sparsematrix[i][j] != 0) {
                    Dmatrix[0][k] = i;
                    Dmatrix[1][k] = j;
                    Dmatrix[2][k] = sparsematrix[i][j];
                    k++;
                }
            }
        }

        // Step 3: Print the triplet representation
        cout << "\nTriplet Representation (Row, Column, Value):\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < non_zero_count; j++) {
                cout << Dmatrix[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nThe matrix is a zero matrix.\n";
    }

    return 0;
}
