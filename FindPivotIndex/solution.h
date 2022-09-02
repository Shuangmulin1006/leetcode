class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int left_sum = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        for (int i = 0; i < nums.size(); i++) {
            if (i != 0)
                left_sum += nums[i - 1];
            int right_sum = sum - left_sum - nums[i];

            cout << "i: " << i << ", left sum: " << left_sum
                 << ", right sum: " << right_sum << endl;

            if (left_sum == right_sum)
                return i;
        }
        return -1;
    }
};