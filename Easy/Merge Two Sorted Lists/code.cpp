#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if(l1 == NULL){
			return l2;
		}
        if(l2 == NULL){
			return l1;
		} 
		if(l1 -> val <= l2 -> val){
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else{
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};	

int main(){
    Solution s;
    ListNode *l1 = new ListNode();
    cout<<"Enter the size : ";
    int size;
    cin>>size;
    while(size--){
        int n=0;
        cin>>n;
        ListNode *temp = new ListNode(n);
        temp->next=l1;
        l1=temp;
    } 
    while(l1!=NULL){
        cout<<l1->val<<"->";
        l1=l1->next;
    }
    ListNode *l2 = new ListNode();
    cout<<"\nEnter the size : ";
    int size2;
    cin>>size2;
    while(size2--){
        int n=0;
        cin>>n;
        ListNode *temp = new ListNode(n);
        temp->next=l2;
        l2=temp;
    } 
    while(l2!=NULL){
        cout<<l2->val<<"->";
        l2=l2->next;
    }
    ListNode *ans = s.mergeTwoLists(l1,l2);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
}