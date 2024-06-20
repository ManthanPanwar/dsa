// elements are non contiguous in linked list.
// Linked list are used in stack/queue or in a browser or etc.
// memory space 32-bit system(4byte + 4byte)    64-bit system(4byte + 8byte)

#include <bits/stdc++.h>
using namespace std;

// self defind data type
// struct Node{
//   int data;
//   Node* next;

//   Node(int data1, Node* next1 = nullptr)
//   {
//     data = data1;
//     next = next1;
//   }
// };

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

void traverseLL(Node* head)
{
  Node* temp = head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

int lengthOfLL(Node* head)
{
  int count=0;
  Node* temp = head;
  while(temp)
  {
    temp = temp->next;
    count++;
  }
  return count;
}

bool searchElement(Node* head, int ele)
{
  Node* temp = head;
  while(temp)
  {
    if(temp->data == ele) return true;
    temp = temp->next;
  }
  return false;
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
  vector<int> arr = {12,2,3,4};
  Node* head = convertArrToLL(arr);
  cout<<head->data;
  cout<<endl;
  traverseLL(head);
  cout<<endl;
  cout<<lengthOfLL(head);
  cout<<endl;
  cout<<searchElement(head, 31);
}