/**
 * @file
 * @brief Return the kth from last node object in a linked list
 * 
 */


node* nthToLast(node* head, int k, int& i) {
    if (head == NULL) {
        return NULL;
    }
    node* nd = nthToLast(head, k, i);
    i = i + 1;
    if (i == k) {
        return head;
    }
    return nd;
}

node * nthToLast(node* head, int k) {
    int i = 0;
    return nthToLast(head, k, i);
}