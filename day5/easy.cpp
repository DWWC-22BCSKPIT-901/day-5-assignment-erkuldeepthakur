#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMovesToSeat(vector<int>& seats, vector<int>& students) {
 sort(seats.begin(), seats.end());
 sort(students.begin(), students.end());
 int moves = 0;
 for (int i = 0; i < seats.size(); i++) {
 moves += abs(seats[i] - students[i]);
 }
 return moves;
}
int main() {
 vector<int> seats1 = {3, 1, 5};
 vector<int> students1 = {2, 7, 4};
 cout << minMovesToSeat(seats1, students1) << endl; 
 vector<int> seats2 = {4, 1, 5, 9};
 vector<int> students2 = {1, 3, 2, 6};
 cout << minMovesToSeat(seats2, students2) << endl; 
 return 0;
}
