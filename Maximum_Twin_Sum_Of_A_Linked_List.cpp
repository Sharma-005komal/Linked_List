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
    int pairSum(ListNode* head) {
        int ans = INT_MIN;
        vector<int> res;
        ListNode* cur = head;
        while(cur)
        {
            res.push_back(cur->val);
            cur = cur->next;
        }
        int n = res.size();
        for(int i=0; i<=(n/2 - 1); i++)
        {
            int x = res[i] + res[n-1-i];
            ans = max(ans, x);
        }
        return ans;
    }
};
