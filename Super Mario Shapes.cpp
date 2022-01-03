#include <stdio.h>
int main()
{
	char *warn= "### Eiste Ektos Euros Timwn ###";
	bool q = true;
	while (q)
	{
	int y,i,j,t,k,a,b,c,d,M,epilogi;
	printf("\n");
	printf("\t#####################################################\n");
	printf("\t# PARAKALO EPILEXTE TO SXHMA POY THELETE NA FTIAXW: #\n"); //Epilogi Sxhmatos
	printf("\t#                                                   #");
	printf("\n\t# - (1)  Skala\t\t\t\t\t\    #\n"
	"\t# - (2)  Kastro\t\t\t\t\t    #\n"
	"\t# - (3)  Goomba\t\t\t\t\t    #\n"
	"\t# - (4)  Katapakti\t\t\t\t    #\n"
	"\t# - (5)  Louloudi Tis Fotias\t\t\t    #\n"
	"\t# - (6)  Fraxtis\t\t\t\t    #\n"
	"\t# - (7)  Empodia\t\t\t\t    #\n"
	"\t# - (8)  Synnefa \t\t\t\t    #\n"
	"\t# - (0)  Exodos \t\t\t\t    #\n");
	printf("\t#                                                   #\n");
	printf("\t#####################################################\n");
	printf("Noumero Epilogis(1-8)  :  ");
	scanf("%d",&epilogi);
	printf("\n\n");
		if (epilogi==1)
			{
				printf("H Epilogi Sas Einai H SKALA.\n");
				printf("Epilexte To Ypsos Tis Skalas:\n");//Epilogh Ypsous Skalas
				printf("YPSOS (6 - 25): ");
				scanf("%d",&y);//Diavazei Ypsos Apo Xrhsth
				printf("\n");
				if (y>=6 & y<=25)//Euros Timwn
				{
				printf("\n");
				t=y+9;//simaia
				for (i = 0; i < t; i++)//symaia 1 grammi
    			printf(" ");
    			printf("*");
    			printf("\n");
    			for (i = 0; i < t-2; i++)//symaia 2 grammi
    			printf(" ");
    			printf("***");
    			printf("\n");
    			for (i = 0; i < t-1; i++)//symaia 3 grammi
    			printf(" ");
    			printf("**");
    			printf("\n");
    			for (i = 0; i < t; i++)//symaia 1 grammi
    			printf(" ");
    			printf("*");
    			printf("\n");
				for(i=1; i<y; i++)//Epanalipsi grammwn skala
    			{
       				for(j=i; j<y; j++)//Typonei Kena
        			{printf(" ");}
       				for(j=1; j<=i; j++)//Typonei Asterakia
       				{printf("*");}
       				printf("*        *");//kontari
      				printf("\n");//Epomeni Grammi
   				}
    			for(i=1; i<=y+1; i++)//Teleutaia Seira
				printf("*");
				printf("        * ");
				}
				else
				{printf( "%s",warn);}
				printf("\n");
    		}
		if (epilogi==2)
			{
				printf("H epilogi Sas Einai To KASTRO.\n");
				printf("Epilexte To Ypsos Toy Kastrou:\n");
				printf("YPSOS(5 - 30) : ");
				scanf("%d",&y);//Diavazei ypsos
				k=y+y-3;
				if(y>=5& y<=30)
				{
				/*1o Kommati Teixakia*/
				for(i=0;i<y-1; i++)
				printf("* ");
				printf("\n");
				/*2o Kommati Toixos*/
				for(i=0; i<y-4; i++)//Seires
				{
					for (j = 0; j < k; j++)//Asteria
					{printf("*");}
    				printf("\n");
				}
				/*3o Kommati Porta*/
				for(i=0; i<=2; i++)//Epanalipeis Grammwn
				{
					for(j=1; j<=y-3; j++)//Kolona
					{printf("*");}
					for(j=0; j<3; j++)//Porta
					{printf(" ");}
					for(j=1; j<=y-3; j++)//Kolona
					{printf("*");}
        		printf("\n");
				}
				}
				else
				{printf( "%s",warn);}
			}
		if (epilogi==3)
			{
				printf("H Epilogi Sas einai o GOOMBA. \n");
				printf("Parakalo Epilxte To Ypsos Tou Goomba:\n");
				printf("YPSOS(5 - 18) :  ");
				scanf("%d",&y);
				printf("\n");
				if(y>=5& y<=18)
				{
				t=y+y-8;
				/*1o Kommati Trigono*/
				for(i=1; i<y; i++)//Seires
				{
					for(k=i; k<y; k++){printf(" ");}//Kena
					for(j=1; j<=i; j++){printf("**");}//Asteria
				printf("\n");	
				}
				/*2o Kommati Vasi*/
				for(i=1; i<=1; i++)
				{
					printf("  **");//Keno Asteri
					for(j=0; j < t; j++)//Endiamesa Kena
					{printf(" ");//Asteri Keno
					}
					printf("** ");
				}
				printf("\n");
				}
				else
				{
				printf( "%s",warn);
				}
			}
		if (epilogi==4)	
			{
				printf("H Epilogi Sas Einai i KATAPAKTH.\n ");
				printf("Parakalw Epilexte To Ypsos Tis Katapaktis (5-20):\n");
				printf("YPSOS(5 - 20) :  ");
				scanf("%d",&y);
				if(y>=5 & y<=20)
				{
					/* 1o Kommati Koryfi*/
					for(i=1; i<=2; i++)//Seires
					{
						for(j=1; j<=y; j++)//Asteria
						{printf("*");}
					printf("\n");
					}
					/* 2o Kommati Katapakti*/
					{
					for(a=1; a<=1; a++)//Keno Prin Tin Proth Seira Asteriwn
					{printf(" ");}
					for(a=1; a<=y-2; a++)//Prwti seira asteria
						{printf("*");}
						printf("\n");
					}
					for(i=1; i<=y-4; i++)//Seires me ta kena
					{
						for(j=1; j<=1; j++)//Kena Aristera
						{printf(" ");}
						{	
							for(b=1; b<=1; b++){printf("*");}//Asteraki aristera
							{
							for (c=1; c<=y-4; c++){printf(" ");}//Kena Eswterika
							{for(b=1; b<=1; b++){printf("*");}}	//Asteraki dexia
							}
						}
						printf("\n");
					}
					{
					for(a=1; a<=1; a++)//Keno Prin Tin Teleutaia Seira Asteriwn
					{printf(" ");}
					for(a=1; a<=y-2; a++){printf("*");}//teleutaia seira asteria
						printf("\n");
					}
				}
				else
				{printf( "%s",warn);}
			}
		if (epilogi==5)
			{
				printf("Epilexate TO LOULOUDI TIS FWTIAS.\n");
				printf("Parakalw Epilexte To Ypsos Gia To Louloudi Tis Fwtias.\n");
				printf("YPSOS (7,9,11,13,15,17,19,21) :  ");
				scanf("%d",&y);
				//int bg=(y-2)/2;
				printf("\n\n");
				if(y== 7 || y==9 || y==11 || y==13 || y==15 || y==17 || y==19 || y==21 )
				/*Louloudi Mesi kai Epanw*/
				{
				/*Epanw Miso*/
				int kena=(y/2)-1; int stars=3;
				for(i=1; i<=(y-3)/2; i++)
				{
					for(j=1; j<=kena; j++)
					printf(" ");
					for(j=1; j<=stars; j++)
					printf("*");
					kena=kena-1; stars=stars+2;
					printf("\n");
				}
				/*Katw Miso*/
				kena=1; stars=y-2;
				for(i=1; i<=(y-3)/2; i++)
				{
					for(j=1; j<=kena; j++)
					printf(" ");
					for(j=0; j<stars; j++)
					printf("*");
					kena++; stars=stars-2;
					printf("\n");
				}
				/* Misxos*/
				
				kena=0; int kena1=2; int bg=(((y-2)/2)-2);
				
				for(i=1; i<=3; i++)
				{
					if(y>7)
					{
					for(j=1; j<=bg; j++)
					{printf(" ");}
					bg++;}
					else{
					for(j=1; j<=kena; j++)
					printf(" ");}
					
					printf("*");
					for(j=1; j<=kena1; j++)
					printf(" ");
					printf("*");
					for(j=1; j<=kena1; j++)
					printf(" ");
					printf("*");
					kena++; kena1--;
					printf("\n");
				}
				}	
				
				else
				{printf( "%s",warn);}
			}
		if (epilogi==6)
			{
			int pasaloi,P;
			printf("Epilexate TON FRAXTH.\n");
			printf("Parakalw Epilexte Ton Arithmo Twn Kathetwnwn Pasalwn.\n");
			printf("PLYTHOS PASALWN (4 - 20) :  ");
			scanf("%d",&pasaloi);
			printf("\n\n");
			if(pasaloi>=4 & pasaloi<=20)
			{
			P= pasaloi*4+2;	
				for(i=1; i<=7; i++)//Stiles(standar arithmos)
				{
					for(j=1; j<=pasaloi; j++)//grammes osoi pasaloi
					{
						if(i==1 || i==3 || i==4 || i==6 || i==7)//syggekrimenes grammes osoi pasaloi
					    {printf("  **");}
						else
						{for(j=1; j<=P; j++)printf("*");}//ypoloipes grammes oso P
					}
				printf("\n");
				}
			}
			else
			{printf( "%s",warn);}
			}
		if (epilogi==7)
			{
				printf("Epilexate TA EMPODIA.\n");
				printf("Parakalw Epilexte To Megisto Ypsos Sta Empodia.\n");
				printf("YPSOS(Apo 2-10) :");
				scanf("%d",&y);
				printf("\n\n");
				if(y>=2&y<=10)
				{
					for(i=1; i<=y; i++)//Stiles = Ypsos
					{
						for(j=i; j<=y-1; j++)//grammes kena
						{	printf("   ");}
						for(j=1; j<=i*2; j++)//asteri*2
						{printf("*  ");	}
					printf("\n");
					}
				}
				else
				{printf( "%s",warn);}
			}
			
		if (epilogi==8)
		{
			int c = 0;
			printf("Epilexate TA SYNNEFA.\n");
				printf("Parakalw Epilexte thn systoixia twn sunnefwn.\n");
				printf("YPSOS(Apo 3-12) :");
				scanf("%d",&y);
				printf("\n\n");	
			if(y>=3 & y<=12)
			{
				for(i=1; i<=4; i++)
				{
					for(j=1; j<=y; j++)
					{
					if(i==1){printf(" **");}
					else if(i==4 & y%2==0){c=1;for(j=c; j<=(3*y)/2; j++)printf(" *");}
					else if(i==4 & y%2==1){for(j=c; j<=(3*y)/2; j++)printf(" *");}
					else
					{for(j=0; j<=3*y; j++)printf("*");}
				}
				printf("\n");
				}
			}
			else
			{printf( "%s",warn);}	
		}
		
		if(epilogi == 0)
		{
			q=false;
			printf("\n Bye Bye!!!\n");
		}
		else
		{
			if (epilogi<1 || epilogi>8)
			{
			printf("Lathos Epilogh");
			}
		}
	}
	return 0;
}
