#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

	FILE *entrada, *saida;
   char linha[254], *filler, *url, *tempoget;
   char *branco = " ";
   float tempo;

   entrada = fopen("result.txt","rt");
   saida   = fopen("final.txt","wt");

   fgets(linha,254,entrada);

   while(!feof(entrada))
   {
//  	   filler = strtok(linha,"%");
//      url = strtok(NULL,"%");
//      filler = strtok(NULL,"%");
//      filler = strtok(NULL,"%");
//      tempoget = strtok(NULL,"%");
		tempoget = strtok(linha,branco);
      url = strtok(NULL,branco);
      tempo = atof(tempoget);
      if (tempo > 0.0)
      {
   		fputs(tempoget,saida);
      	fputs(branco,saida);
      	fputs(url,saida);
//      fputc(10,saida);
		}
   	fgets(linha,254,entrada);
	}
   fclose(saida);
   fclose(entrada);
}
