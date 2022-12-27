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
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        int up=0, down=n-1, left=0, right=m-1, dir = 0;
        vector<vector<int>> ans(n, vector<int>(m, -1));
        while(up<=down && left<=right && head)
        {
            if(dir==0) // left to right
            {
                for(int i=left; i<=right; i++)
                {
                    ans[up][i] = head->val;
                    head = head->next;
                    if(!head) break;
                }
                up++;
            }
            else if(dir==1)
            {
                for(int i=up; i<=down; i++)
                {
                    ans[i][right] = head->val;
                    head = head->next;
                    if(!head) break;
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right; i>=left; i--)
                {
                    ans[down][i] = head->val;
                    head = head->next;
                    if(!head) break;
                }
                down--;
            }
            else
            {
                for(int i=down; i>=up; i--)
                {
                    ans[i][left] = head->val;
                    head = head->next;
                    if(!head) break;
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};