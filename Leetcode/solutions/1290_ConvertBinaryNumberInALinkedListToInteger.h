/// 1290. Convert Binary Number in a Linked List to Integer: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

class Solution_1290
{
public:
	struct ListNode
	{
		int val;
		ListNode* next;

		ListNode() : val(0), next(nullptr)
		{
		}

		ListNode(int x) : val(x), next(nullptr)
		{
		}

		ListNode(int x, ListNode* next) : val(x), next(next)
		{
		}
	};

	int getDecimalValue(ListNode* head)
	{
		auto retVal = 0;

		while (head)
		{
			retVal = (retVal << 1) + head->val;
			head = head->next;
		}

		return retVal;
	}
};
