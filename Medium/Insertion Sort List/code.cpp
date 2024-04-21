class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        //same code hai bhai sort list question ka to bass ye jugaru tarika hai 
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