#include<iostream>
using namespace std;

struct Node
{
  Node *next;
  int data;
};
//Create a new Node
struct Node* create_new_node(int data)
{
  Node *new_node = new Node;
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

//insert new_node in the front
void insert_in_front(struct Node** head, int data)
{
  //create the new node
  Node *temp = create_new_node(data);
  //make the temp->next = head
  temp->next= *head; //careful! dont make changes to the local copy, use double ptr and make changes to the pointer to head.
  //make the temp the head
  *head=temp;

}

void insert_in_end(struct Node** head, int data)
{
  Node *temp = *head;
  //traverse to the last node using the condition while temp->next not equal to null
  while(temp->next!=NULL)
  temp=temp->next;
  temp->next = create_new_node(data);


}
int ll_length(struct Node** head)
{
  Node *t = *head;
  int count =0;
  while(t!=NULL)
  {
    t=t->next;
    ++count;
  }
  return count;
}

void insert_in_middle(struct Node** head, int data, int pos)
{
  Node *temp = *head;
  int it = 2;
  if(pos==1)
    insert_in_front(&temp,data);
  else if(pos==int(ll_length(&temp)))
    insert_in_end(&temp,data);
  else
  {
    temp = temp->next;
    while(it!=pos)
    {
      temp=temp->next;
      it++;
    }
    Node *tt = temp->next;
    temp->next = create_new_node(data);
    temp->next->next = tt;
    delete tt;
  }
}

//Determine the length of the linkedlist from the head pointer

//traverse and print all the elements in the list
void print_all(struct Node** head)
{
    if(!(*head))
    return;
    else
    {
      struct Node *t = *head;
      cout<<endl<<"Traversing and Printing all the Elements";
      while(t!=NULL)
      {
        cout<<endl<<t->data<<endl;
        t=t->next;
      }
    }
}
int main()
{
  Node *head = create_new_node(1);
  cout<<endl<<head->data<<endl;
  insert_in_front(&head,2);
  print_all(&head);
  insert_in_end(&head,3);
  print_all(&head);
  insert_in_middle(&head,4,2);
  print_all(&head);
}
