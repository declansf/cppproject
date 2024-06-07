#include <iostream>
#include "IntNode.h"
using namespace std;

void PrintLinkedList(IntNode* headnode) {
   headnode -> PrintData();
   if ( headnode->GetNext() == nullptr) {
      return;
   }
   else {



      PrintLinkedList(headnode -> GetNext());
   }

}


int main() {
   int size;
   int value;

   cin >> size;
   IntNode* headNode = new IntNode(-1);   // Make head node as the first node
   IntNode* lastNode = headNode;          // Node to add after
   IntNode* newNode = nullptr;               // Node to create

   // Insert the nodes
   for (int n = 0; n < size; ++n) {
      cin >> value;
      newNode = new IntNode(value);
      lastNode->InsertAfter(newNode);
      lastNode = newNode;
   }

   // Call PrintLinkedList() with node after head node
   PrintLinkedList(headNode->GetNext());

   return 0;
}