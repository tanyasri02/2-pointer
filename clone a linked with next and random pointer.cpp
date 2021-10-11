1. approach 1: store the nodes in unoredered_map.. the just point random
class Solution {
public:
    Node* copyRandomList(Node* head) {
         unordered_map<Node*,Node*>m;
        Node* p=head,*q=NULL;
        while(p){
            q=new Node(p->val);
            m[p]=q;
            p=p->next;
        }
        p=head;
        q=NULL;
        while(p){
            if(q==NULL){
                q=m[p];
            }
            if(p->next)
                m[p]->next=m[p->next];
            if(p->random)
                m[p]->random=m[p->random];
            p=p->next;
        }
        return q;
    }
};
