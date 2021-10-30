#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int sidly,sdosa,stea,svadai;
   int midly,mdosa,mtea,mvadai;
   clrscr();
   scanf("%d",&aidly);
   printf("\nAlagu idly:");
   scanf("%d",adosa);
   printf("Alagu dosa:");
   scanf("%d",atea);
   printf("Alagu tea:");
   scanf("%d",avadai);
   printf("Alagu vadai:");
   idly=idly-aidly;
   dosa=dosa-adosa;
   tea=tea-atea;
   vadai=vadai-avadai;
   scanf("%d",&sidly);
   printf("\n\tsanthosh idly:");
   scanf("%d",&sdosa);
   printf("\n\tsanthosh dosa:");
   scanf("%d",&stea);
   printf("\n\tsanthosh tea:");
   scanf("%d",&svadai);
   printf("\n\tsanthosh vadai:");
   idly=idly-sidly;
   dosa=dosa-sdosa;
   tea=tea-stea;
   vadai=vadai-svadai;
   scanf("%d",&midly);
   printf("\n\tmonisha idly:");
   scanf("%d",mdosa);
   printf("\n\tmonisha dosa:");
   scanf("%d",mtea);
   printf("\n\tmonisha tea:");
   scanf("%d",mvadai);
   printf("\n\tmonisha vadai:");
   idly=idly-midly;
   dosa=dosa-mdosa;
   tea=tea-mtea;
   vadai=vadai-mvadai;
   printf("\n\tBalance of idly:",idly);
   printf("\nBalance of dosa:",dosa);
   printf("\nBalance of tea:",tea);
   printf("\nBalance of vadai:",vadai);
   getch();
}

