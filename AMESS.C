#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int sidly,sdosai,stea,svadai;
   int bidly,bdosai,btea,bvadai;
   clrscr();
   scanf("%d",&aidly);
   printf("\n\tEnter the alagu's idly:",aidly);
   scanf("%d",&adosai);
   printf("\tEnter the alagu's dosai:",adosai);
   scanf("%d",&atea);
   printf("\tEnter the alagu's tea:",atea);
   scanf("%d",&avadai);
   printf("\tEnter the alagu's vadai:",avadai);
   bidly=idly-aidly;
   bdosai=dosai-adosai;
   btea=tea-atea;
   bvadai=vadai-avadai;
   scanf("%d",&sidly);
   printf("\n\tEnter the santhosh's idly:",sidly);
   scanf("%d",&sdosai);
   printf("\tEnter the santhosh's dosai:",sdosai);
   scanf("%d",&stea);
   printf("\tEnter the santhosh's tea:",stea);
   scanf("%d",&svadai);
   printf("\tEnter the santhosh's vadai:",svadai);
   bidly=bidly-sidly;
   bdosai=bdosai-sdosai;
   btea=btea-stea;
   bvadai=bvadai-svadai;
   printf("\n\tBalance of idly:%d",bidly);
   printf("\tBalance of dosai:%d",bdosai);
   printf("\tBalance of tea:%d",btea);
   printf("\tBalance of vadai:%d",bvadai);
   getch();
}






