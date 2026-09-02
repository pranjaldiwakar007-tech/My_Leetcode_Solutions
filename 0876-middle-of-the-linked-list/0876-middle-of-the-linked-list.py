# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        cnt=0
        while(temp!=None):
            cnt+=1
            temp=temp.next
        temp=head
        n=cnt//2+1
        cnt=0
        prev=temp
        while temp!=None:
            cnt+=1
            if cnt==n:
                prev.next=None
                # head=temp
                break
            prev=temp
            temp=temp.next
        return temp
        