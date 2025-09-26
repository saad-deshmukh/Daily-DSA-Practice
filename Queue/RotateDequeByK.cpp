/*You are given a deque dq[] (double-ended queue) containing non-negative integers, along with two positive integer type and k. The task is to rotate the deque circularly by k positions.
There are two types of rotation operations
Right Rotation (Clockwise): If type = 1, rotate the deque to the right. This means moving the last element to the front, and repeating the process k times.
Left Rotation (Anti-Clockwise): If type = 2, rotate the deque to the left. This means moving the first element to the back, and repeating the process k times.
Examples:
Input: dq = [1, 2, 3, 4, 5, 6], type = 1, k = 2
Output: [5, 6, 1, 2, 3, 4]
Explanation: The type is 1 and k is 2. So, we need to right rotate dequeue by 2 times.
In first right rotation we get [6, 1, 2, 3, 4, 5].
In second right rotation we get [5, 6, 1, 2, 3, 4].
Input: dq = [10, 20, 30, 40, 50], type = 2, k = 3
Output: [40, 50, 10, 20, 30]
Explanation: The type is 2 and k is 3. So, we need to left rotate dequeue by 3 times.
In first left rotation we get [20, 30, 40, 50, 10].
In second left rotation we get [30, 40, 50, 10, 20].
In third left rotation we get [40, 50, 10, 20, 30].*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateDeque(deque<int> &dq, int type, int k)
    {   
        k = k%dq.size();
        if (type == 1)
        {

            while (k > 0)
            {
                int element = dq.back();
                dq.push_front(element);
                dq.pop_back();
                k--;
            }
        }
        else
        {
            while (k > 0)
            {
                int element = dq.front();
                dq.push_back(element);
                dq.pop_front();
                k--;
            }
        }
    }

    void PrintDeque(deque<int> dq)
    {
        for (int i = 0; i < dq.size(); i++)
        {
            cout << dq[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Solution s;
    deque<int> dq1;

    dq1.push_back(10);
    dq1.push_back(20);
    dq1.push_back(30);
    dq1.push_back(40);
    dq1.push_back(50);
    dq1.push_back(60);
    dq1.push_back(70);

    int type1 = 1; // Right rotate 
    int k = 5; 
    cout << "Checking For Right  Rotation " << endl ; 
    // before
    s.PrintDeque(dq1);
    s.rotateDeque(dq1, type1, k);
    // after
    s.PrintDeque(dq1);
    

    int type2 = 2;  // Left rotate 
    deque<int> dq2;
    dq2.push_back(10);
    dq2.push_back(20);
    dq2.push_back(30);
    dq2.push_back(40);
    dq2.push_back(50);
    dq2.push_back(60);
    dq2.push_back(70);
    cout << "Checking For Left Rotation " << endl ; 
    s.PrintDeque(dq2);
    s.rotateDeque(dq2, type2, k);
    s.PrintDeque(dq2);
    
    return 0 ;
}