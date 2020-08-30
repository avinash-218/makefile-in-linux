#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char *name;
	printf("\nEnter name of file\n");
	scanf("%s",name);
	fp=fopen("makefile","w");
	fprintf(fp,"output:%sImp.o %sApp.o\n\tc++ %sImp.o %sApp.o -o output.exe\n",name,name,name,name);
	fprintf(fp,"%sImp.o:%sImp.c++\n\tc++ -c %sImp.c++\n",name,name,name);
        fprintf(fp,"%sApp.o:%sApp.c++\n\tc++ -c %sApp.c++\n",name,name,name);
	fclose(fp);
	return 0;
}

