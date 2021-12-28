class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int front=0, rear=numbers.size()-1;
        while(front<rear)
        {
            int sum = numbers[front]+numbers[rear];
            if(sum==target)
            {
                numbers.clear();
                numbers.push_back(front+1);
                numbers.push_back(rear+1);
                return numbers;
                
            }
            if(sum>target)
                rear--;
            else front++;
        }
        numbers.clear();
        return numbers;
    }
};