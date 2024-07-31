#include<stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
  //  system("cls");
    
    FILE *pt = fopen(argv[1], "r");
    printf(argv[1]);
    char ch[50];
    if (pt==NULL)
    {
        printf("Error");
        return 1;
    }
    int line =0;
    while (fgets(ch,sizeof(ch),pt)!=NULL)
    {
        line ++;
        //printf("%s",ch);
    }
    printf("\nTotal Line : %d\n",line);
    
    for (int i = 0; i < line; i++) {
        int line_to_read = (i % 2 == 0) ? i / 2 : line - 1 - i / 2;
        
        fseek(pt, 0, SEEK_SET);
                
        for (int j = 0; j <= line_to_read; j++) {
            if (fgets(ch, sizeof(ch), pt) == NULL) {
                break;
            }
        }
        printf("%s", ch);
        
        if (i%2!=0){
        printf("\n");
        }
    
    }
    return 0;
}
