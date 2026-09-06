# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        a=[]
        b=[]
        while l1:
            a.append(str(l1.val))
            l1=l1.next
        while l2:
            b.append(str(l2.val))
            l2=l2.next
        n1=int(''.join(a[::-1]))
        n2=int(''.join(b[::-1]))
        n3=n1+n2
        if n3==0:
            return ListNode(0)
        ans=[]
        while n3>0:
            k=n3%10
            n3//=10
            ans.append(k)
        # ans=ans[::-1]
        head=ListNode(ans[0])
        temp=head
        for i in range(1,len(ans)):
            temp.next=ListNode(ans[i])
            temp=temp.next
        return head


