#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int largest = INT_MIN; // Takes into account negative numbers!
    int current_sum = 0;
    
    for (int i=0; i<A.size(); i++){
        current_sum += A[i]; // Add current sum to the current vector index.
        
        largest = max(largest, current_sum); // Assign largest number to "largest" variable.
        // Placing "largest" variable before the 'current_sum<0' check, it ensures that if the elements in the subarrays are negative, it will assign the highest (closer to 0) negative value.

        if (current_sum < 0){ // If becomes negative, reset to zero
            current_sum = 0;
        }
        
    }
    
    return largest;
}   

int main() {
    int largest;

    // vector<int> A = {1,-2,3,4,4,-2};
    vector<int> A = {5,0,-1,0,1,2,-1};

    largest = maxSumSubarray(A);
    cout << largest << endl;

	return 0;
}

