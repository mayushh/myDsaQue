#include<iostream>
#include<vector>
using namespace std;

int findMaxNONAdjacent(vector<int>& a, int i) {
    if (i >= a.size()) {
        return 0;
    }

    // Case 1: Include the current element
    int sum_include = a[i] +  findMaxNONAdjacent(a, i + 2);

    // Case 2: Exclude the current element
    int sum_exclude = findMaxNONAdjacent(a, i + 1);

    // Return the maximum of the two cases
    return max(sum_include, sum_exclude);
}

int main() {
    vector<int> a = {10, 2, 1, 4, 9, 8};
    cout << findMaxNONAdjacent(a, 0);
    return 0;
}
