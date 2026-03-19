#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<long long>> matrix(n, vector<long long>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    long long maxSum = LLONG_MIN;
    int Index = -1;

    for (int j = 0; j < n; j++) {
        long long currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum += matrix[i][j];
		}
        if (currentSum > maxSum) {
            maxSum = currentSum;
            Index = j + 1; 
        }
    }

    cout << Index << " " << maxSum << endl;

    return 0;
}