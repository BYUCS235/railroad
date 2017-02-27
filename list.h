#ifndef LIST_H_
#define LIST_H_

#include <stdexcept>
#include <cstddef>

template<typename Item_Type>
class list {
    private:
    // Insert definition of nested class DNode here.
#include "DNode.h"
    public:
    // Data fields
    /** A reference to the head of the list */
    DNode* head;
    /** A reference to the end of the list */
    DNode* tail;
    /** The size of the list */
    int num_items;
    // Functions
    /** Construct an empty list. */
    list() {
      head = NULL;
      tail = NULL;
      num_items = 0;
    }
    
    /** Destroy a list. */
    ~list() {
      while (head != NULL) {
      	DNode* current = head;
      	head = head->next;
      	delete current;
      }
      tail = NULL;
      num_items = 0;
    }
    
    /** Insert an object at the beginning of the list.
        @param item - the item to be added 
    */
    void insertHead(const Item_Type& item) {
      head = new DNode(item, NULL, head); // Step 1
      if (head->next != NULL)
      	head->next->prev = head;  // Step 2
      if (tail == NULL)    // List was empty.
      	tail = head;
        num_items++;
    }
    
    /** Insert an object at the end of the list.
        @param item - the item to be added 
    */
    void insertTail(const Item_Type& item) {
      if (tail != NULL) {
      	tail->next = new DNode(item, tail, NULL); // Step 1
      	tail = tail->next; // Step 2
      	num_items++;
      } else {         // List was empty.
      	push_front(item);
      }
    }
    
    Item_Type front() {
      if(head)
        return head->data;
      else
        return -1;
    }
    
    void pop_front() {
      if(head != NULL) {
        DNode *temp = head;
        head = head->next;
        if(head == NULL)
          tail = NULL;
      }
    }
};
    
#endif
