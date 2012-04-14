 #include<stdio.h>
 
 struct node;
 typedef struct node *pnode;
 struct node
 {
    int no;
    pnode pnext;
 };

typedef struct
{
    pnode head;
    int size;
}seqlist;

int main()
{
    int a = 0;
    seqlist sl;
    sl.head = NULL;
    sl.size = 0;
    pnode present,prev;
    while(a != 42)
    {
        scanf("%d",&a);
        present = (pnode)malloc(sizeof(struct node));
        present->no = a;
        present->pnext = NULL;
        if(sl.head == NULL)
        {
            sl.head = present;
            prev = present;
            sl.size++;
        }
        else
        {
            prev->pnext = present;
            prev = present;
            sl.size++;
        }
    }
    for(present = sl.head; sl.size > 1; sl.size--)
    {
        printf("%d\n",present->no);
        prev = present;
        present = present->pnext;
        free(prev);
    }
    return 0;
}
