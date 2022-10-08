#include <iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {

        // if n is 1 or 2, simply return n
        if (n <= 2)
        {
            return n;
        }

        // from step 3 to n, we can find the amount of steps by:
        // previous index + previous previous index
        int previous_previous = 1;
        int previous = 2;

        // iterate and calculate
        for (int i = 3; i <= n; i++)
        {
            int temp = previous;
            previous = previous + previous_previous;
            previous_previous = temp;
        }
        return previous;
    }
};

int main()
{
    Solution solution;
    int example_one = 2;
    int example_two = 3;
    int example_three = 4;

    cout << "Example One : " << solution.climbStairs(example_one) << endl;
    cout << "Example Two : " << solution.climbStairs(example_two) << endl;
    cout << "Example Three : " << solution.climbStairs(example_three) << endl;

	return 0;
}
