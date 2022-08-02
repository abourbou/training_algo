// The API isBadVersion is defined for you.
bool isBadVersion(int version);

//problem : https://leetcode.com/problems/first-bad-version

class Solution {
public:
    int firstBadVersion(int n) {
        long min = 1;
        long max = n;
        long middle;

        while (min <= max)
        {
            middle = (max + min) / 2;
            if (isBadVersion(middle))
            {
                if (middle == 1 || !isBadVersion(middle - 1))
                    return (middle);
                max = middle - 1;
            }
            else
                min = middle + 1;
        }
        return (-1);
    }
};