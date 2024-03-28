#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    float value;
    struct node *link;
}node;
void main()
{
    node counter[10], *n1,*n2;
    float ar[10]= {0.79,0.13,0.16,0.64,0.39,0.20,0.89,0.53,0.71,0.42};
    float fa[10],temp;
    int i,j,k=0;
    float n,a;
    clrscr();
    for (i = 0; i < 10; i++)
    {
	counter[i].value = 0;
	counter[i].link = 0;
    }

    for(i=0; i<10; i++)
    {
	n = ar[i];
	j= n * 100;
	j= j/10;

	if(counter[j].value==0 && counter[j].link == 0)
	    counter[j].value = ar[i];
	else
	{
	    if(counter[j].link ==0 && counter[j].value!=0)
	    {
		counter[j].link = (node*) malloc(sizeof(node));
		n2 = counter[j].link;
		n2 ->link = 0;
		n2 ->value =ar[i];
		continue;
	    }
	n2 = counter[j].link ;
	while(n2 -> link !=0)
	{
	    n2 = n2->link;
	}
	n2 -> link=(node*)malloc(sizeof(node));
	n2 = n2 -> link;
	n2-> link=0;
	n2-> value = ar[i];
	}
    }

    printf("sorted Arrayy \n\n");

    for(i=0 ; i<10 ; i++)
    {
	if(counter[i].link ==0 && counter[i].value ==0)
	    continue;
	else
	{
	    n1= &counter[i];
	    n2= &counter[i];

	    if(n2-> link !=0)
	    {
		    while(n1!=0)
		    {
			while(n2!=0)
			{
			    if(n1-> value > n2-> value)
			    {
				temp= n1->value;
				n1-> value= n2->value;
				n2-> value=temp;
			    }
			    n2= n2 -> link;
			}
			n2 = n1->link;
			n1= n1->link;
		    }
		    n1= &counter[i];
		    for(; n1!=0; k++)
		    {
			fa[k] = n1->value;
			n1 = n1 -> link;
		    }
	    }
	    else{
		fa[k] = counter[i].value;
		k = k+1;
	    }
	}
    }
    for(i=0; i<10;i++)
    {
	printf("  %0.2f ",fa[i]);
    }
    getch();
}