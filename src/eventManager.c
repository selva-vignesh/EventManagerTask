#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int mod_no;
	int bit[32];
	struct Node *next;
};

extern struct Node *head_node;

void interest_mod(int e, void (*func[10])() )
{
    int e1;
	printf("Enter the Event no. ");
    scanf("%d", &e1);

	struct Node * temp = head_node;
	while(temp!=NULL){
		
        if(temp->bit[e1] == 1)
        {
            printf("The module -> %d\n", temp->mod_no);
            func[(temp->mod_no) - 1]();
        } 

		temp = temp->next;
		}
}
