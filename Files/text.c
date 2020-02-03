#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
    FILE *fptr; 
    char ch; 
    int wrd=1,charctr=1,spc=1;
    char fname[20];
    printf("\n\n Count the number of words and characters in a file :\n");
	printf("---------------------------------------------------------\n"); 
	printf(" Input the filename to be opened : ");
	scanf("%s",fname);    

    fptr=fopen(fname,"r"); 
    if(fptr==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else 
        { 
          ch=fgetc(fptr); 
          printf(" The content of the file %s are : ",fname); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
			if(ch==' ')
                                spc++;
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fptr); 
            }
        printf("\n The number of words in the  file %s is : %d\n",fname,wrd-2); 
        printf(" The number of characters in the  file %s is : %d\n",fname,charctr-1);
        printf(" The number of spaces in the  file %s is : %d\n\n",fname,spc-1);         
        } 
    fclose(fptr); 
}
