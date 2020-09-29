#include<stdio.h>
#include<string.h>
#include <ctype.h>
void RemoveSpaces(char* source)
{
  char* i = source;
  char* j = source;
  while(*j != 0)
  {
    *i = *j++;
    if(*i != ' ')
      i++;
  }
  *i = 0;
}
void trim(char * s) {
    char * p = s;
    int l = strlen(p);

    while(isspace(p[l - 1])) p[--l] = 0;
    while(* p && isspace(* p)) ++p, --l;

    memmove(s, p, l + 1);
} 
int main()
{
	int i,count;
	FILE *file = fopen ( "input.c", "r" );
	FILE *fptr;
    fptr = fopen("output.c","w");
	if ( file != NULL )
    {
      char line [ 128 ];
      while ( fgets ( line, sizeof line, file ) != NULL )
      {
		  trim(line);
         if(line[0]=='c' && line[1]=='h' && line[2]=='a' && line[3]=='r')
         {
			 count=0;
			 for(i=0;i<strlen(line);i++)
			 {
				 if(line[i]=='(' || line[i]==')')
				 count=1;
			 }
			 if(line[strlen(line)-1]=='{')
			 count++;
			 if(count==0 || count==1)
			 {
				 if(line[strlen(line)-1]!=';')
				 {
					 fprintf(fptr,"%s",line);
					 fprintf(fptr,";\n");
				 line[strlen(line)]=';';
				 }
			 }
			 else
		     {
			 fprintf(fptr,"%s\n",line);
		     }
		 }
		 else if(line[0]=='i' && line[1]=='n' && line[2]=='t')
         {
			 count=0;
			 for(i=0;i<strlen(line);i++)
			 {
				 if(line[i]=='(' || line[i]==')')
				 count=1;
			 }
			 if(line[strlen(line)-1]=='{')
			 count++;
			 if(count==0 || count==1)
			 {
				 if(line[strlen(line)-1]!=';')
				 {
					 fprintf(fptr,"%s",line);
					 fprintf(fptr,";\n");
				 line[strlen(line)]=';';
				 }
			 }
			 else
		     {
			 fprintf(fptr,"%s\n",line);
		     }
		 }
		 else if(line[0]=='p' && line[1]=='r' && line[2]=='i' && line[3]=='n' && line[4]=='t' && line[5]=='f')
         {
			 if(line[strlen(line)-1]!=';')
			 {
				 fprintf(fptr,"%s",line);
				 fprintf(fptr,";\n");
			 }
			 else
			 {
				 fprintf(fptr,"%s\n",line);
			 }
		 }
		 else if(line[0]=='s' && line[1]=='c' && line[2]=='a' && line[3]=='n' && line[4]=='f')
         {
			 if(line[strlen(line)-1]!=';')
			 {
				 fprintf(fptr,"%s",line);
				 fprintf(fptr,";\n");
			 }
			 else
			 {
				 fprintf(fptr,"%s\n",line);
			 }
		 }
		 else if(line[0]=='r' && line[1]=='e' && line[2]=='t' && line[3]=='u' && line[4]=='r' && line[5]=='n')
         {
			 if(line[strlen(line)-1]!=';')
			 {
				 fprintf(fptr,"%s",line);
				 fprintf(fptr,";\n");
			 }
			 else
			 {
				 fprintf(fptr,"%s\n",line);
			 }
		 }
		 else if((line[strlen(line)-1]!='>') && (line[strlen(line)-1]!='}') && (line[strlen(line)-1]!='{') && (strlen(line)!=0) && (line[0]!='/' && line[1]!='/') )
         {
			 if(line[strlen(line)-1]!=';')
			 {
				 fprintf(fptr,"%s",line);
				 fprintf(fptr,";\n");
			 }
			 else
			 {
				 fprintf(fptr,"%s\n",line);
			 }
		 }
		 else
		 {
			 fprintf(fptr,"%s\n",line);
		 }
      }
    }
    printf("Phrase Level Error Recovery is applied => semicolon inserted Successfully");
    
}
