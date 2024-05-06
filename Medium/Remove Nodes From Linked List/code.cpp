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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* preeshu = head;
        while(preeshu!=nullptr){
            if(st.empty()){
                st.push(preeshu);
            }
            else{
                while(preeshu->val>st.top()->val){
                    st.pop();
                    if(st.empty()){
                        break;
                    }
                }
                st.push(preeshu);
            }
            preeshu=preeshu->next;
        }
        cout<<st.size()<<" ";
        ListNode* ans = st.top();
        ListNode* ansmain = st.top();
        st.pop();
        while(!st.empty()){
            ListNode* f = st.top();
            ans->next = f;
            ans = f;
            cout<<f->val<<"->";
            st.pop();
        }
        ans->next=nullptr;
        ListNode* p = nullptr;
        ListNode* c = ansmain;
        ListNode* nn = nullptr;
        while (c != nullptr) {
            nn = c->next; 
            c->next = p;
            p = c;
            c = nn;
        }
        return p;     
        // code to bahut ganda likha hai par chal gaya    
    }
};