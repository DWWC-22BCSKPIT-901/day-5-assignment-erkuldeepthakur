#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int kthSmallestSum(vector<vector<int>>& mat, int k) {
 priority_queue<int> pq;
 pq.push(0);
 for (auto& row : mat) {
 priority_queue<int> nextPq;
 while (!pq.empty()) {
 int sum = pq.top(); pq.pop();
 for (int num : row) {
 nextPq.push(sum + num);
 if (nextPq.size() > k) nextPq.pop();
 }
 }
 swap(pq, nextPq);
 }
 return pq.top();
}
int main() {
 vector<vector<int>> mat1 = {{1, 3, 11}, {2, 4, 6}};
 int k1 = 5;
 cout << kthSmallestSum(mat1, k1) << endl; 
 vector<vector<int>> mat2 = {{1, 10, 10}, {1, 4, 5}, {2, 3, 6}};
 int k2 = 7;
 cout << kthSmallestSum(mat2, k2) << endl; 
 return 0;
}
