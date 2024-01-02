#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 int a[10][10],b[10][10],m[10][10],i,j,p,q,r,s,k;
 char x[10],y[10];
 int t=0,fl=0,l,ain=0,bin=0;
 printf("Enter the size of A Matrix\n");
 scanf("%d%d",&p,&q);
 printf("Enter the size of B Matrix\n");
 scanf("%d%d",&r,&s);
 if(q==r)
 {
  printf("Test case1:Martrix Multiplication can be done \n");
  printf("case1:Sucess\n");
  printf("Enter the elements of matrix A:\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
   {
    fl=0;
    ain=0;
    scanf("%s",x);
    l=strlen(x);
    while(x[ain++]!='\0')
    {
     if(x[ain]=='.')
     {
      fl=1;
      break;
     }
    }
   if(fl==0)
   {
    a[i][j]=atoi(x);
   }
   else
   {
   t=1;
   }
  }
 }
 printf("Enter the elements of matrix B:\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<s;j++)
  {
   fl=0;
   bin=0;
   scanf("%s",y);
   l=strlen(y);
   while(y[bin++]!='\0')
   {
    if(y[bin]=='.')
    {
     fl=1;
     break;
    }
   }
   if(fl==0)
   {
    b[i][j]=atoi(y);
    }
   else
   {
    t=1;
   }
  }
 }
 if(t==0)
 {
  for(i=0;i<p;i++)
  {
   for(j=0;j<s;j++)
   {
    m[i][j]=0;
    for(k=0;k<q;k++)
    {
     m[i][j]=m[i][j]+a[i][j]*b[k][j];
    }
   }
  }
  printf("The result of Matroix Multiplication is:\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<s;j++)
   {
    printf("%d\t",m[i][j]);
   }
   printf("\n");
   }
  }
  else
  {
   printf("Test case3:Matrix Multiplication is not possible \n one or more values is not an integer\n case3:Failure\n");
   getch();
  }
 }
 else
 printf("Test case2:Matrix Multiplication is not possible \nThe columns of A matrix is notr equal to row of B matrix\n case2:Failue\n");
 getch();
 clrscr();
}