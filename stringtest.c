#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE* fptr;
   
    int count=0;

    char data[50];
    char string[100][100];
    
    fptr = fopen(argv[1], "r");//textWrite.txt

    if (fptr == NULL) {
            printf("text file failed to open.");
    }
    else {
            printf("\n The file opened.\n ");

         
        while(fgets(data, 50, fptr) != NULL){
            strcpy(string[count], data);
            count++;
        }
        fclose(fptr);       
             
        for (int i = 0; i < (count + 1) / 2; i++) {
            printf("\t%s", string[i]); 

            if (i != count - i - 1) {
                printf("\t%s\n", string[count - i - 1]); 
        }
    }
       

        printf( "\n Data sorted successfully \n ");
        //printf("%d",count);
        
    }
    return 0;
}
