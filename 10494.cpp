#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 300

typedef struct table
{
    int id;
    int diff;
    struct table *next;
    struct table *prev;
}Table;

Table bottom[N];
Table books[N];

int main(void)
{
    int i,j,k,n,a,b,flag=0;
    char word[20], word2[20];
    Table *head, *curr, *tmp;

   // freopen("test.txt","r",stdin);

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        bottom[i].id=i;
        bottom[i].diff=1;
        bottom[i].prev=NULL;
        bottom[i].next=&books[i];
        books[i].id=i;
        books[i].diff=0;
        books[i].next=NULL;
        books[i].prev=&bottom[i];
    }

     k=scanf("%s %d %s %d",word,&a,word2,&b);

    while(/*strcmp(word,"exit")!=0&&*/k!=EOF)
    {
        if(a!=b){

                curr=&books[a];
        while(curr!=NULL)
        {
            if(curr->id==b)
                flag++;
            curr=curr->next;
        }
        curr=&books[a];
        while(curr!=NULL)
        {
            if(curr->diff==0)
            if(curr->id==b)
                flag++;
            curr=curr->prev;
        }


                if(flag==0)
                {




        if(strcmp(word,"move")==0)
        {
         //   scanf("%d",&a);
         //   scanf("%s",word);
            if(strcmp(word2,"onto")==0)
            {
                 //   scanf("%d ",&b);
                    curr=books[a].next;
                    books[a].next=NULL;
                    books[a].prev->next=NULL;
                    while(curr!=NULL){
                    tmp=curr;
                    bottom[curr->id].next=curr;
                    curr->prev=&bottom[curr->id];
                    curr=curr->next;
                    tmp->next=NULL;
                    }
                    books[a].next=NULL;
                    books[a].prev->next=NULL;
                    curr=books[b].next;
                    while(curr!=NULL){
                    tmp=curr;
                    tmp->prev->next=NULL;
                    bottom[curr->id].next=curr;
                    curr->prev=&bottom[curr->id];
                    curr=curr->next;
                    tmp->next=NULL;
                    }



                    books[b].next=&books[a];
                    books[a].prev->next=NULL;
                    books[a].prev=&books[b];


            }
            else if(strcmp(word2,"over")==0)
            {
                 //   scanf("%d",&b);
                    curr=books[a].next;
                    books[a].next=NULL;
                    books[a].prev->next=NULL;
                    while(curr!=NULL){
                    bottom[curr->id].next=curr;
                    curr->prev=&bottom[curr->id];
                    tmp=curr;
                    curr=curr->next;
                    tmp->next=NULL;
                    }
                   curr=&books[b];
                   if(curr!=NULL)
                    while(curr->next!=NULL){
                    curr=curr->next;
                    }
                   curr->next=&books[a];
                   books[a].prev->next=NULL;
                   books[a].prev=curr;

            }
        }



        else if(strcmp(word,"pile")==0)
        {
          //  scanf("%d ",&a);
         //   scanf("%s ",word);
              if(strcmp(word2,"onto")==0)
            {
                //    scanf("%d",&b);
                    curr=books[b].next;
                    if(curr!=NULL)
                    curr->prev->next=NULL;
                    while(curr!=NULL){
                    tmp=curr;
                    bottom[curr->id].next=curr;
                    curr->prev=&bottom[curr->id];
                    curr=curr->next;
                    tmp->next=NULL;
                    }

                    books[a].prev->next=NULL;
                    books[b].next=&books[a];
                    books[a].prev->next=NULL;
                    books[a].prev=&books[b];


            }
            else if(strcmp(word2,"over")==0)
            {
                 //   scanf("%d",&b);
                    curr=&books[b];
                    if(curr!=NULL)
                    while(curr->next!=NULL){
                    curr=curr->next;
                    }
                   curr->next=&books[a];
                   books[a].prev->next=NULL;
                   books[a].prev=curr;
        }

        }

    }
    flag=0;

    }





    k=scanf("%s %d %s %d",word,&a,word2,&b);

    }
           for(i=0;i<n;i++)
           {
               printf("%d:",i);
               curr=bottom[i].next;
               while(curr!=NULL)
               {
                  printf(" %d",curr->id);
                  curr=curr->next;
               }
               printf("\n");
           }

 return 0;

}

/*192.168.136.1*//*CSY103062316*/
