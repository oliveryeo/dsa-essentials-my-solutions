
#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){

	int n = a.size();
	vector<int> tmp; // create and copy temporary vector

	tmp = a; // Note that this creates a COPY of a vector.
	// This assignment operator does not work for arrays.

	// Rotate the temporary vector k number of times
    for (int i=0; i<k; i++){

		int s = 0; // start
		int e = n-1; // end

		while (s < e){
			swap(tmp[s], tmp[e]);
			s++;
		}
    }	

    return tmp; // return the temporary vector
}


int main(){

    int x = 2;

    vector<int> arr = {1,3,5,7,9};

    int n = arr.size();

    arr = kRotate(arr, 2);

    for (int i=0; i<n; i++){
    	cout << arr[i] << " ";
    }
    cout << endl;

	return 0;
}