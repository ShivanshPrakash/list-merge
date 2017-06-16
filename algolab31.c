#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>
struct node
{
int data;
struct node *next;
};
typedef struct node Node;
void main()
{
int n1,n2,n,a,num,flag,num2,count1,count2,mflag;
Node *head1,*head2,*temp1,*temp2,*link1,*link2;
printf("Enter the value of n for both the lists\n");
scanf("%d",&n1);
scanf("%d",&n2);
srand ( time(NULL) );
if(n2>n1)
n=n2;
else n=n1;
flag=1;
count1=0;
count2=0;
mflag=1;
//construction of nodes
while(count1<=n1 && count2<=n2)
{
//check if merged.....
if(flag==1)
{
//printf("Currently flag is 1\n");
num=rand() % 10 + 1;
if(num>((RAND_MAX % 10 + 1) /2))
flag=0;
}
//printf("The value of count 1 is %d\n",count1);
//printf("The value of count 2 is %d\n",count2);
//.......
if(flag==1)
{
//decide new node will be added to which list
num2=rand() % 10 + 1;
if(num>((RAND_MAX % 10 + 1) /2) && count1<n1)
//for l1
{
printf("Appending to list 1\n");
//printf("Inside loop- The value of count 1 is %d\n",count1);
count1++;
temp1=(Node *)malloc(sizeof(Node));
if(count1>1)
link1->next=temp1;
temp1->data=rand() % 10 + 1;
if(count1==1)
{
head1=temp1;
}
link1=temp1;
}
else if(count2<n2)
//forl2
{
//printf("Appending to list 2\n");
count2++;
temp2=(Node *)malloc(sizeof(Node));
if(count2>1)
link2->next=temp2;
temp2->data=rand() % 10 + 1;
if(count2==1)
{
head2=temp2;
}
link2=temp2;
}
}
//if merged
if(flag==0)
{
  //  printf("Flag became 0\n");
   if(n1>n2)
    {
 //   printf("Appending to list 1\n");
    count1++;
    temp1=(Node *)malloc(sizeof(Node));
    if(count1>1)
    link1->next=temp1;
    temp1->data=rand() % 10 + 1;
    if(count1==1)
    {
    head1=temp1;
    }
    link1=temp1;
    if(count2<n2)
    {
        count2++;
    if(mflag==1)
    {
        if(count2>1)
        link2->next=temp1;
        if(count2==1)
            head2=temp1;
    }
    }
    }
    else
    {
  //  printf("Appending to list 2\n");
    count2++;
    temp2=(Node *)malloc(sizeof(Node));
    if(count2>1)
    link2->next=temp2;
    temp2->data=rand() % 10 + 1;
    if(count2==1)
    {
    head2=temp2;
    }
    link2=temp2;
    if(count1<n1)
    {
        count1++;
    if(mflag==1)
    {
        if(count1>1)
        link1->next=temp2;
        if(count1==1)
            head1=temp2;
    }
    }
    }
mflag=0;
}
}
if(flag==0)
{
if(n1>n2)
temp1->next=NULL;
else
temp2->next=NULL;
}
else
{
  temp1->next=NULL;
 temp2->next=NULL;
}
temp1=head1;
temp2=head2;
a=0;
printf("printing list 1\n");
while(a<n1)
{
printf("%d\t",temp1->data);
temp1=temp1->next;
a++;
}
printf("\n");
printf("Printing list 2\n");
a=0;
while(a<n2)
{
printf("%d\t",temp2->data);
temp2=temp2->next;
a++;
}
}
