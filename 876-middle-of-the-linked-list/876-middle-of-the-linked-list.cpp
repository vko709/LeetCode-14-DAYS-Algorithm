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
    ListNode* middleNode(ListNode* head) {
        ListNode *p = head, *q = head;
        int counter = 0;
        while(p!=NULL){
            counter+=1;
            p=p->next;
        }
        int middle = (counter/2)+1;
        int c = 0;
        while(++c!=middle){
            q=q->next;
        }
        cout<<counter<<"\n";
        return q;
    }
};