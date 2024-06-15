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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        if(head==nullptr && head->next==nullptr){
            return head;
        }
        ListNode* ans1 = head;
        ListNode* ans2 = head->next;
        ListNode* atif = head;
        ListNode* shobhit = head->next;
        while(atif->next!=nullptr && shobhit->next!=nullptr ){
            cout<<"saiyam";
            atif->next=atif->next->next;
            shobhit->next=shobhit->next->next;
            atif=atif->next;
            shobhit=shobhit->next;
        }
        atif->next=ans2;
        return ans1;
    }
};