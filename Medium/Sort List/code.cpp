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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* l1=head;
        while(l1!=nullptr){
            v.push_back(l1->val);
            l1=l1->next;
        }
        sort(v.begin(),v.end());
        ListNode* l2=head;
        int i=0;
        while(l2!=nullptr){
            l2->val=v[i];
            l2=l2->next;
            i++;
        }
        return head;
    }
};