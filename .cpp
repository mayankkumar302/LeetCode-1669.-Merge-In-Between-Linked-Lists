//T.C : O(m+n), at worst case we will be visiting all nodes of both the linked lists at least once
//S.C : O(1)
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* left  = NULL;
        ListNode* right = list1;
        
        for(int i = 0; i <= b; i++) {
            if(i == a-1) {
                left = right;
            }
            right = right->next;
        }
        
        left->next = list2;
        
        ListNode* temp = list2;
        while(temp && temp->next) {
            temp = temp->next;
        }
        
        temp->next = right;
        
        return list1;  
    }
};
