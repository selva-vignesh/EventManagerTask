#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int mod_no;
	int bit[32];
	struct Node *next;
};

struct Node *head_node;;

void module_func(int m,int e)
{
	int n,i, tot_event;
	struct Node * n1 = (struct Node *) malloc(sizeof(struct Node));

	printf("Enter Module no. ");
	scanf("%d", &n1->mod_no);

    printf("Enter no.of Events: ");
    scanf("%d",&tot_event);
    printf("Enter the event numbers: \n");
    for(i=0; i<tot_event;i++)
    {
        scanf("%d",&n);
        n1->bit[n] = 1;
    }

	n1->next = NULL;
	if(head_node==NULL){
		head_node = n1;
	}
	else{
		n1->next = head_node;
		head_node = n1;
		}
}

void mod1()
{
	printf("Callback of Module1 is called\n");
}
void mod2()
{
	printf("Callback of Module2 is called\n");
}
void mod3()
{
	printf("Callback of Module3 is called\n");
}
void mod4()
{
	printf("Callback of Module4 is called\n");
}
void mod5()
{
	printf("Callback of Module5 is called\n");
}
void mod6()
{
	printf("Callback of Module6 is called\n");
}
void mod7()
{
	printf("Callback of Module7 is called\n");
}
void mod8()
{
	printf("Callback of Module8 is called\n");
}
void mod9()
{
	printf("Callback of Module9 is called\n");
}
void mod10()
{
	printf("Callback of Module10 is called\n");
}