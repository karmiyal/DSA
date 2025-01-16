// Problem statement
// You are given a sorted array 'arr' of positive integers of size 'n'.



// It contains each number exactly twice except for one number, which occurs exactly once.



// Find the number that occurs exactly once.



// Example :
// Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

// Output: 2

// Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 5
// 1 1 2 2 3


// Sample Output 1:
// 3


// Explanation of sample output 1:
// {1, 2} each occurs twice, whereas 3 occurs only once.
// Hence the answer is 3.


// Sample Input 2:
// 5
// 8 8 9 9 10


// Sample Output 2:
// 10


// Expected time complexity :
// The expected time complexity is O(n), but try solving it in O(log n).


// Constraints:
// 1 <= 'n' <= 10^4
// 1 <= 'arr[i]' <= 10^9

// ‘n’ is always odd.

// Time Limit: 1 sec

///////////////////////////////////////////CodingNinja////////////////////////////////////////////////////
//Function.
#include <iostream>
#include <map>         // Ensure that this header is included
#include <vector>
using namespace std;
int getSingleElement(vector<int> &arr){
	map<int,int>frequency;
	for(int num:arr){
		frequency[num]++;
	}	
	for(const auto&pair:frequency){
		if(pair.second==1){
			return pair.first;
		}
	}
	return -1;
}

//////////////////////////////////////////SourceCode///////////////////////////////////////////////////
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr) {
    map<int, int> frequency;

    // Count the frequency of each element in the map
    for (int num : arr) {
        frequency[num]++;
    }

    // Find the element that occurs only once
    for (const auto& pair : frequency) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1; // If no single element is found, return -1 (though it’s guaranteed to find one)
}

int main() {
    // Example input
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    // Call the function and output the result
    cout << "The number that occurs once is: " << getSingleElement(arr) << endl;

    return 0;
}
///////////////////////////////////////////////FindONCEandTWICE////////////////////////////////////////
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void findNumbersUsingMap(const vector<int>& nums) {
    // Step 1: Create a map to store frequencies
    map<int, int> frequency;
    
    // Step 2: Populate the map with frequencies of elements
    for (int num : nums) {
        frequency[num]++;
    }
    
    // Step 3: Separate numbers appearing once and twice
    vector<int> once, twice;
    for (const auto& pair : frequency) {
        if (pair.second == 1) {
            once.push_back(pair.first);
        } else if (pair.second == 2) {
            twice.push_back(pair.first);
        }
    }
    
    // Step 4: Output the results
    cout << "Numbers that appear once:" << endl;
    for (int num : once) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Numbers that appear twice:" << endl;
    for (int num : twice) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Example usage
    vector<int> nums = {4, 5, 6, 5, 4, 7, 8, 4, 6};
    findNumbersUsingMap(nums);
    return 0;
}
