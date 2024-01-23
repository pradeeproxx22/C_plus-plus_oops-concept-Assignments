#include<iostream>
using namespace std;


class node //It is a individual data type created explicitly.
{ public:
  int item;
  node *next_address;   
};

class SLL{
private:
    node *start_nod_KAadd;
public:
 SLL();
 void insertatstart(int);
 void insertat_Last(int);
 node* Search_node(int);
 void Insert_after(node*,int);

};

SLL::SLL()
{
 start_nod_KAadd=NULL;
}

void SLL::insertatstart(int num)
{ //This dynamically node is now right before first node and this Dynam. node is first node.
  node *temp_node=new node();  // node variable which contain num and *next_ka_address  and isko store krege hm node pointer m.
  temp_node->item=num;
  temp_node->next_address=start_nod_KAadd;
  start_nod_KAadd = temp_node;
}

void SLL::insertat_Last(int num)
{  node *temp_node=new node();
   node *t; // ye *temp pointer h last node last node m rakhe NULL ko new last node ka jo address us sy change krna
   temp_node->item=num;
   temp_node->next_address=NULL;
   if(start_nod_KAadd==NULL)
   {
      start_nod_KAadd=temp_node;
   }
   else  // This method is called traversing 
   {  t=start_nod_KAadd;
      while(t->next_address!=NULL)
       t=t->next_address;
       t->next_address=temp_node;  // last sy ek pehlay wale node m new last node ka address rakhenge or kaam khatm   
   }
   
   

}
 
node* SLL::Search_node(int data)  // return type class name::function name(arguments)
{ 
   node *temp;
   temp=start_nod_KAadd;  // Start==NULL to loop end
   while(temp) //
   { 
     if(temp->item==data)
     return temp;
     temp=temp->next_address;
   }
   return NULL;   
}

void SLL::Insert_after(node *temp,int data)
{
  
}