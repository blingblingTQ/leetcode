#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *fast = head->next->next;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            if(slow == fast)
                return true;
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};

int main(void)
{
    Solution solution;
    cout << solution.hasCycle(NULL) << endl;
}