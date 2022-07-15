#include <bits/stdc++.h>
using namespace std;

// Iterative solution O(N)
int lowerBound1(vector<int> A, int Val) {
    // your code goes here
    int lower = INT_MIN;

    for (int i=0; i<A.size(); i++){
		if (A[i] > lower && A[i] <= Val){ // As long as A[i] is <= Val, there will be a lower bound
		    lower = A[i];
		}
    }
    
    if (lower == INT_MIN){ // If A[i] is forever > than Val, there is no lower bound, hence return -1.
        lower = -1;
    }
	
	return lower;
}

// Binary search solution
int lowerBound2(vector<int> A, int Val) {
	
	int lower = INT_MIN;
	int n = A.size(); // size of vector
	
	int s = 0; // starting point
	int e = n-1; // ending point
	int mid;

	while (s <= e){ // As long as start does not exceed end.
		
		mid = (s+e)/2;
		
		if (A[mid] > lower && A[mid] <= Val){ // Assign the lower bound, and search higher.
			lower = A[mid];
			s = mid+1;
		}
		else if (A[mid] > Val){ // Value too high, search lower.
			e = mid-1;
		}
	}

	if (lower == INT_MIN){ // If A[i] is forever > than Val, there is no lower bound, hence return -1.
        lower = -1;
    }

    return lower;

}

int main(){
	// your code goes here
    int lower;
    int Val = 4;

    vector<int> arr = {-1,-1,2,3,5};

    lower = lowerBound(arr, Val);

    cout << lower << endl;

	return 0;
}