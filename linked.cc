#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(){
        val = 0;
        next = nullptr;
    }
    ListNode(int x){
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode *next){
        val = x;
        next = nullptr;
    }
};

struct LinkedList{
    int size;
    ListNode *head;

    LinkedList(): size(0), head(nullptr) {}
    LinkedList(int s, ListNode *h): size(s), head(h) {}

    int getSize(){
        return size;
    }
};


int main(){
    LinkedList l = LinkedList(0, new ListNode(-1) );
    int x = 1;

    ListNode *ptr = l.head;

    for (int i = 0; i < 10; i++){
        l.size++;
        ptr->next = new ListNode(x);
        ptr = ptr->next;
        x *= 2;
    }

    printf("%d\n", l.size);



    ptr = l.head;
    int j = 0;

    while (ptr != nullptr){
        printf("Element %d: %d\n", j, ptr->val);
        ptr = ptr->next;
        j++;
    }


    return 0;





}

