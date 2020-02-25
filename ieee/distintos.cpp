#include <bits/stdc++.h> 
using namespace std; 
  
// Fucntion that returns minimum number of changes 
int minimumOperations(int a[], int n) 
{ 
  
    // Hash-table to store frequency 
    unordered_map<int, int> mp; 
  
    // Increase the frequency of elements 
    for (int i = 0; i < n; i++) 
        mp[a[i]] += 1; 
  
    int count = 0; 
  
    // Traverse in the map to sum up the (occurences-1) 
    // of duplicate elements 
    for (auto it = mp.begin(); it != mp.end(); it++) { 
        if ((*it).second > 1) 
            count += (*it).second-1; 
    } 
    return count; 
} 
  
// Driver Code 
int main() 
{ 
    int a[] = {2, 3, 4, 2, 2, 1, 3 }; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    cout << minimumOperations(a, n); 
    return 0; 
}