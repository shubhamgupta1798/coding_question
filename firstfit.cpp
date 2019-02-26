#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
 int start;
 int end;
 char proc_id;
 int free;
 struct node *link;
}*head;

void createnode(){
 struct node *new_node,*temp=head;
 new_node=(struct node *)malloc(sizeof(struct node));
 cout<<"enter start location: ";
 cin>>new_node->start;
 cout<<"\nenter end location: ";
 cin>>new_node->end;
 if(new_node->start>=new_node->end)
 {
   cout<<"you have entered wrong address please exit and start again\n";
 }
 else{
 new_node->link=NULL;

 new_node->proc_id='0';
 new_node->free=0;

 if(head==NULL)
{
 head=new_node;
 }
else
{
 while(temp->link!=NULL)
 {temp=temp->link;}
 temp->link=new_node;
 new_node->link=NULL;
}
}}




void insert_data(){
	char id;
	int size;
	int found=0;
	cout<<"Enter process id: ";
	cin>>id;
	cout<<"Enter size: ";
	cin>>size;
	struct node *temp=head;
	while(temp->link!=NULL)
	{
		if((temp->end - temp->start + 1) == size && temp->free!=1)
		{
			temp->proc_id=id;
			temp->free=1;
			found=1;
			break;
		}
		else if((temp->end - temp->start+1) > size && temp->free!=1)
		{
			struct node *new_node;
			new_node=(struct node *)malloc(sizeof(struct node));
			new_node->end=temp->end;
			new_node->link=temp->link;
			temp->proc_id=id;
			temp->free=1;
			temp->end=temp->start+size-1;
			temp->link=new_node;
			new_node->start=temp->end+1;
			new_node->free=0;
			new_node->proc_id='0';
			found=1;
			break;
		}
		temp=temp->link;
	}
	if((temp->end - temp->start + 1) == size && temp->free!=1)
	{
			temp->proc_id=id;
			temp->free=1;
			found=1;
	}
	else if((temp->end - temp->start+1) > size && temp->free!=1)
	{
			struct node *new_node;
			new_node=(struct node *)malloc(sizeof(struct node));
			new_node->end=temp->end;
			new_node->link=temp->link;
			temp->proc_id=id;
			temp->free=1;
			temp->end=temp->start+size-1;
			temp->link=new_node;
			new_node->start=temp->end+1;
			new_node->free=0;
			new_node->proc_id='0';
			found=1;
	}
	if(found==0){
		cout<<"no space availabe\n";
	}

}


void delete_data(){
	char id;
	int found=0;
	cout<<"enter id :";
	cin>>id;
	struct node *temp=head;
	while(temp->link!=NULL)
	{
		if(temp->proc_id==id)
		{
			temp->proc_id='0';
			temp->free=0;
			found=1;
		}
	temp=temp->link;
	}

	if(temp->proc_id==id)
	{
		temp->proc_id='0';
		temp->free=0;
		found=1;
	}
	if(found==0)
	{
		cout<<"cannot delete\n";
	}
	temp=head;
	while(temp->link!=NULL)
	{
		if(temp->end+1==temp->link->start && temp->free!=1 && temp->link->free!=1)
		{
			temp->end=temp->link->end;
			temp->link=temp->link->link;
		}
		else
		{
			temp=temp->link;
		}
	}
}



void display(){
 if(head==NULL)
{
  printf("empty\n");
}
else
{
struct node *temp=head;
while(temp->link!=NULL)
{
printf("start:%d  end:%d  process:%c  used:%d\n",temp->start,temp->end,temp->proc_id,temp->free);
temp=temp->link;
}
printf("start:%d end:%d process:%c used:%d\n",temp->start,temp->end,temp->proc_id,temp->free);
}
}

int main()
{
int i,k;
cout<<"enter number of nodes:";
cin>>k;
for (i=1;i<=k;i++)
{
	createnode();
}


while(1)
{
  int c;
	cout<<"1.start a process   2.end a process  3. display 4. end\n";
	cin>>c;
	if(c==1)
	{
		insert_data();

	}
	else if(c==2)
	{
		delete_data();

	}
  else if (c==3)
  {
    display();
  }

	else
	{
	break;
	}


}
}
