#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
int power;
int coeff;
struct node* next;
};
struct node *f1=NULL,*f2=NULL,*f3=NULL;
struct node* insert(int a,int pow)
{
  struct node* new_n=(struct node*)malloc(sizeof(struct node*));
  printf("\nenter the coeff of power %d ",pow);
  scanf("%d",&new_n->coeff);
  new_n->next=NULL;
  new_n->power=pow;
  struct node* first;
  if(a==1)
  {
    first=f1;
  }
  else if(a==2)
  first=f2;
  else
  {
    first=f3;
  }
  if(first==NULL)
  {
    first=new_n;
    return(first);
  }
  else{
    struct node* traverse=first;
    while(traverse->next!=NULL)
    {
      traverse=traverse->next;
    }
    traverse->next=new_n;
    return(first);

  }
}
struct node* insert1(int pow,int b)
{
struct node* new_n=(struct node*)malloc(sizeof(struct node*));
  new_n->coeff=b;
  new_n->next=NULL;
  new_n->power=pow;
  struct node* first;


    first=f3;

  if(first==NULL)
  {
    first=new_n;
    return(first);
  }
  else{
    struct node* traverse=first;
    while(traverse->next!=NULL)
    {
      traverse=traverse->next;
    }
    traverse->next=new_n;
    return(first);

  }
}
void display(struct node* first)
{
  struct node* traverse=first;
  if(first==NULL)
  {
    cout<<"list empty";
  }
  else
  {
    while(traverse->next!=NULL)
    {
      cout<<"x"<<traverse->power<<" coeff"<<traverse->coeff<<"->";
      traverse=traverse->next;
    }
    cout<<"x"<<traverse->power<<" coeff"<<traverse->coeff;
  }
}
void cof(struct node* first)
{
  struct node* traverse=first;
  if(first==NULL)
  {
    cout<<"list empty";
  }
  else
  {
    while(traverse->next!=NULL)
    {
      cout<<traverse->coeff<<"->";
      traverse=traverse->next;
    }
    cout<<traverse->coeff;
  }
}
struct node* subtract(struct node* f11,struct node* f22,int c)
{
  struct node* traverse=f22;
  struct node* traverse2=f11;

  while(traverse->next!=NULL)
  {
    traverse2->coeff=traverse2->coeff-(traverse->coeff)*c;
    traverse2=traverse2->next;
    traverse=traverse->next;
  }
    traverse2->coeff=traverse2->coeff-(traverse->coeff)*c;
  cof(f11);
  cout<<"\n";
  return f11;
}
void division(int n,int m)
{
  int c1=n-m;
  while(c1>=0){
  int c=f2->coeff;
  c=f1->coeff/c;
  f3=insert1(c1,c);


  struct node* a=subtract(f1,f2,c);
  f1=f1->next;
  c1--;
  display(a);

}}
int main()
{
printf("enter the power of x in p");
int n;
cin>>n;
int c1,c2;
c1=n;

while(n>=0)
{
  f1=insert(1,n);
  n--;
}
printf("enter the power of x in q");
int m;
cin>>m;
c2=m;

while(m>=0){
  f2=insert(2,m);
  m--;
}
display(f1);
cout<<"\n";
display(f2);
cout<<"\n";

if(c1<c2)
{
  cout<<"quoitent=0  remainder=";
  display(f2);
}
else
{
  division(c1,c2);
  display(f3);
}


}
