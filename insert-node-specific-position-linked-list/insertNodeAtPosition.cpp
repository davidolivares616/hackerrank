/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* curr = llist;
    while (position > 1) {
        position--;
        curr = curr->next;
    }
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    n->next = curr->next;
    curr->next = n;
    return llist;
}
