#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 200



int main()
{	

        double P[N][N] = {0}, aux[N][N] = {0};   // inicialização das matrizes
	int i, j, t; 
	FILE *saida;

        saida=fopen("raio.dat","w");

		
	for(i=0; i<N; i++)
	{ 
            aux[N-1][i] = 1.0;

            P[N-1][i] = 100.00;

        }
        
        for(i=N/4; i<N-(N/4); i++)
	{       
            aux[N-(N/4)][i] = 1.0;

        }
	
        for(i=N/4;i<N-(N/4); i++)      
	{       
            aux[i][N/2] = 1.0;
        }
	  

            
                        
        
//##################################################função potencial#############################################
	
	for(t=0; t<20000; t++)	
	{		
		for(i=1; i<N; i++)
		{
			for(j=1; j<N; j++)
			{
				if(aux[i][j]==0)
				{
					P[i][j] = (P[i+1][j] + P[i-1][j] + P[i][j+1]+ P[i][j-1])/ 4.0;	
				}
			}
		}
	}

//################################################# Funçao para imprimir ##########################################


        for(i=1; i<N-1; i++)
	{
		for(j=1; j<N-1; j++)
		{
		     fprintf(saida,"%0.2lf\t", P[i][j]);
                }
                if(j==N-1)
		    fprintf(saida,"\n");
		
	}
       

}
	
