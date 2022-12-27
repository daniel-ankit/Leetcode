class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        if(nums.size()==0) return 0;
        int count = 0;
        map<int, bool>mp;
        for(auto x:nums) mp[x] = 0;
        while(head)
        {
            if(mp.find(head->val)!=mp.end() && mp[head->val] == 0)
            {
                count++;
                while(head && mp.find(head->val)!=mp.end() && mp[head->val]==0)
                {
                    mp[head->val] = 1;
                    head = head->next;
                }
            }
            else head = head->next;
        }
        return count;
    }
};