#include<stdio.h>
#include<stdlib.h>
#include "myargs.h"
#include "FileNameTools.h"
#include "TxtTools.h"

/*
 add some comment here. this is new modification from Texas. 11/18/2015 

*/

void main(int argc,char* argv[])
{
	//TestFileNameTools();
	//In the beginning of main, Parse the argv.
	
	if(ParseMyArgs(argc,argv)==1)
	{
		exit(1);
	}

	if(i->count>0)
	{
		TestTxtTools();
	}

	if(size->count >0)
	{
		printf("size=%d\n",size->ival[0]);
	}

	if(keyword->count >0)
	{
		printf("keyword=%s",keyword->sval[0]);
	}

	for (int j=0; j<files->count; j++)
        printf("filename[%d] = \"%s\"\n", j, files->filename[j]);


	//TestTxtTools();
	//getch(); /*����ʹ���������ͣס��������һ����������Ƿ���ȷ*/

	//in the end of main, call Delete MyArgs
	DeleteMyArgs();
}
