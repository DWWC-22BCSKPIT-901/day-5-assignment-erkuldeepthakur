#include <iostream>
#include <vector>
using namespace std;
int searchNumber(int k, const vector<int>& arr) {
 for (int i = 0; i < arr.size(); i++) {
 if (arr[i] == k) {
 return i + 1;
 }
 } 
 return -1;
}
int main() { 
 int k1 = 16;
 vector<int> arr1 = {9, 7, 16, 16, 4};
 cout << searchNumber(k1, arr1) << endl; 
 int k2 = 98;
 vector<int> arr2 = {1, 22, 57, 47, 34, 18, 66};
 cout << searchNumber(k2, arr2) << endl; 
 int k3 = 9;
 vector<int> arr3 = {1, 22, 57, 47, 34, 9, 66};
 cout << searchNumber(k3, arr3) << endl; 
 return 0;
}
