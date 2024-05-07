#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declaracao de variaveis locais

	 int x[10],y[10],u[10],d[10],s[10],p[10],it[10];
	 int i,j,k,cont_u,cont_d,cont_i;

  // Leitura dos vetores X,Y//////////////////////OK///
	 for(i=0;i<10;i++){
		 printf("x[%i]:",i+1);
		 scanf("%i",&x[i]);
	 }	
	 for(i=0;i<10;i++){
		 printf("y[%i]:",i+1);
		 scanf("%i",&y[i]);
	 }
	 cont_u=0;
	 cont_i=0;
	 cont_d=0;
	 //////////////////////////////////////OK////////
	 for(i=0;i<10;i++){
		 j=0;
		 while(j < cont_u && x[i]!= u[j]){
				j=j+1;
		 }
		 if (j >= cont_u){
				u[cont_u] = x[i];
				cont_u=cont_u+1;
		 }
	 }			 
	 for(i=0;i<10;i++){
		 j=0;
		 while(j < cont_u && y[i]!= u[j]){
				j=j+1;
		 }
		 if(j >= cont_u){
			u[cont_u]=y[i];
			cont_u=cont_u+1;
		 }
	 }
	 printf("\nUNIAO:\n");
	 for(i=0;i<cont_u;i++){
		 printf(" %i ", u[i]);
	 }
	 /////////////////////////////////////////OK////
	 for(i=0;i<10;i++){
		 j=0;
		 while(x[i]!= y[j] && j < 10){
				j=j+1;
		 }
		 if(j>=10){
				k=0;
				while(k <= cont_d && x[i]!= d[k]){
					 k=k+1;
				}
				if(k >= cont_d){
					 d[cont_d] = x[i];
					 cont_d = cont_d + 1;
				}
		 }
	 }
	 printf("\n DIFERENCA:\n ");
	 for(i=0;i<cont_d;i++){
		 printf(" %i ", d[i]);
	 }
	 /////////////////////////////////OK////////////
	 for(i=0;i<10;i++){
		 s[i]=x[i]+y[i];
		 p[i]=x[i]*y[i];
	 }
	 printf("\nSOMA:\n");
	 for(i=0;i<10;i++){
		 printf(" %i " , s[i]);
	 }
	 printf("\nPRODUTO:\n");
	 for(i=0;i<10;i++){
		 printf(" %i " , p[i]);
	 }
	 /////////////////////////////////OK////////////			
	 for (i=0;i<10;i++)
		{ 
			j = 0;
			while (j < 10 && x[i] != y[j])
			 { 
				  j++;
			 }
			if (j < 10)
				 {
					 k = 0;
					 while (k < cont_i && it[k] != x[i])
					 {
							k++;
					 }
					 if (k >= cont_i)
							{ it[cont_i] = x[i];
								cont_i++;
							}
					}
	 }
	 printf("\n INTERSECCAO: \n");
	 for(i=0;i<cont_i;i++){
		 printf(" %i ", it[i]);
	 }
	 ///////////////////////////////////////////////
	 printf("\n\n\n\n\n\n");
	 system("pause");
}