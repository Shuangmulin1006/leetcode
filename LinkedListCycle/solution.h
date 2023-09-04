using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return false;
        ListNode *hare, *tortoise;

        hare = head;
        tortoise = head;
        do {
            if (hare->next == nullptr || hare->next->next == nullptr)
                return false;
            hare = hare->next->next;
            tortoise = tortoise->next;
            if (hare == tortoise)
                return true;
        } while ((tortoise != nullptr) && (tortoise != head));
        return false;
    }
};