#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char * sentense);

int main(){
	int sChar= sizeof(char), val=0, sent=0;
	char * str = (char *)malloc(sChar*256),* dst = (char *)malloc(sChar*256),  firstWord[64], * sentense =(char *)malloc(sChar*32);
	gets(str);
	strcpy(dst,str);
	sentense= strtok(str, " .?!");
	strcpy(firstWord,sentense);
	while (sentense!=NULL)
	{				
		if(!strcoll(firstWord,sentense))
		{
			++val;
		}
		sentense = strtok(NULL, " .?!");
	}
	sentense= strtok(dst, ".?!");
	while (sentense!=NULL)
	{
		++sent;
		sentense=strtok(NULL,".?!");
	}
	printf("%f", (double)(val-1)/sent);
	free(dst);
	free(sentense);
	free(str);
	return 0;
}

int count(char * sentense){
	char * word=strtok(sentense," ,-");
	int val =0;
	while (word!=NULL)
	{
		printf("\n\tword: %s", word);
		++val;
		word=strtok(NULL," ,-");
	}
	return val;
}
