#include <stdio.h>
#include <string.h>
char*f="#include <stdio.h>%c#include <string.h>%cchar*f=%c%s%c;int main(){char*n=%cSully_%c;int i=%d;FILE *fp;n=strjoin(n, (char*)i + '0'));fp=fopen(n, w);while(i--)fprintf(fp,f,10,10,34,f,34,34,34,i,10); return(0);}%c";
int main()
{
	char *n;
	n = strdup("Sully_5.c");
	int i=5;
	FILE *fp;
	while(i--)
	{
		fp=fopen(n, "w");
		fprintf(fp,f,10,10,34,f,34,34,34,i,10);
		n[6]=i+'0';
	}
	return(0);
}
