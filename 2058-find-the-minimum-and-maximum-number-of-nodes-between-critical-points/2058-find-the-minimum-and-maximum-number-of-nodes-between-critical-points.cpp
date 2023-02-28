/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>points;
        int i = 1;
        while(head && head->next && head->next->next)
        {
            if(head->val < head->next->val && head->next->val > head->next->next->val)
                points.push_back(i);
            else if(head->val > head->next->val && head->next->val < head->next->next->val)
                points.push_back(i);
            i++;
            head = head->next;
        }
        if(points.size()<=1) return {-1, -1};
        int minn = points[points.size()-1] - points[0], maxx = minn;
        for(int i=1; i<points.size(); i++)
        {
            minn = min(minn, points[i]-points[i-1]);
        }
        return {minn, maxx};
    }
};