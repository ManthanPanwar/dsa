// in a linked list problem always think of the edge cases and you built up on that never try to think of a algorithm directly.

/*
deletion and insertion has 4 variety:
{
  1-> head
  2-> position
  3-> value
  4-> last
}
*/ 

#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data1, Node* next1 = nullptr)
  {
    data = data1;
    next = next1;
  }
};

Node* removeHead(Node* head)
{
  if(head == NULL) return head;
  Node* temp = head;
  head = head->next;

  free(temp);
  return head;
}

Node* removeTail(Node* head)
{
  if(head == NULL || head->next == NULL) return NULL;

  Node* temp = head;
  while(temp->next->next != NULL)
  {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = nullptr;
  return head;
}

Node* removeKth(Node* head, int k)
{
  if(head == NULL) return head;
  if(k==1)
}
void traverseLL(Node* head)
{
  Node* temp = head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

Node* convertArrToLL(vector<int>& arr)
{
  Node* head = new Node(arr[0]);
  Node* mover = head;

  for(int i=1; i<arr.size(); i++)
  {
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }
  return head;
}

int main()
{
  vector<int> arr = {1,2,3,4,5};
  Node* head = convertArrToLL(arr);
  traverseLL(head);
  cout<<endl;
  head = removeTail(head);
  traverseLL(head);
}