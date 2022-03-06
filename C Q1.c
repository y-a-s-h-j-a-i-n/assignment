#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  b_price;
     int  b_flag;
};
int main()
{
     struct book b[20];
     int    ch,n,m=0,i,count=0,temp1;
     char   temp[40];
     do
     {
          printf("\t\tMENU");
          printf("\n-------------------------------------\n");
          printf("PRESS 1.TO ADD BOOK INFORMATION.");
          printf("\nPRESS 2.TO DISPLAY BOOK INFORMATION.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO DISPLAY BOOK OF GIVEN NAME.");
          printf("\nPRESS 5.TO COUNT NUMBER OF BOOKS IN LIBRARY.");
          printf("\nPRESS 6.TO DISPLAY BOOK ACCORDING TO ACCESSION NUMBER.");
          printf("\nPRESS 7.TO EXIT.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many BOOK Records You Want to Add: ");
                    scanf("%d",&n);
                    temp1=count;
                    printf("-------------------------------------\n");
                    printf("Add Details of %d Book\n",n);
                    printf("-------------------------------------\n");
                    for(i = temp1 ; i < temp1+n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("\nBook Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("\nEnter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("\nEnter price of book : ");
                         scanf("%d",&b[i].b_price);
                         printf("\nenter 0 if book in library else 1:");
                         scanf("%d",&b[i].b_flag);
                         printf("-------------------------------------\n");
                         count+=1;
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name\t  Author Name\tPrice\t flag");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < count ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t\t  %d\t %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].b_price,b[i].b_flag);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    printf("--------------------------------------");
                    for( i = 0 ; i < count ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                              printf("\n%s\n",b[i].b_name);
                    }
                    break;
               case 4 :
                    printf("\nEnter name of book: ");
                    scanf("%s",temp);
                    printf("--------------------------------------");
                    for( i = 0 ; i < count ; i++)
                    {
                         if(strcmp(b[i].b_name,temp) == 0)
                         {
                            printf("\n-----------------------------------------------------------\n");
                            printf("Book No.   Book Name\t  Author Name\tPrice\t flag");
                            printf("\n------------------------------------------------------------");
                            printf("\n %d\t  %s\t  %s\t\t  %d\t %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].b_price,b[i].b_flag);
                         }
                    }
                    break;
               case 5 :
                    for( i = 0 ; i < count ; i++)
                    {
                        if(b[i].b_flag==0)
                        m+=1;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",m);
                    printf("-----------------------------------------\n");
                    break;
               case 6:
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < count ; i++)
                    {
                         printf("\n %d\t  %s",b[i].b_no,b[i].b_name);
                    }
                    printf("\n\n");
                    break;
               case 7 :
                    exit(0);
          }
     }while(ch != 7);
     return 0;
}