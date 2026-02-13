#include<stdio.h>

//int main()
//{
  /*  char strl[51];
    //scanf("%s",strl);
    //printf("%s",strl);
    gets(strl);
    puts(strl);

    return 0;
    }   */ ///same input same output show kora


 /* #include<string.h>
   int main(){
    char s1[51]="Hello";
    char s2[51]="Hi";
    char s3[51]="Hello";

    char tmp_str[51];
    char rev_str[51];

    strcpy(tmp_str, s1);
    puts(tmp_str);

    strcat(tmp_str, s2);
    strcat(tmp_str,"Welcome to uiu spl lab");
    puts(tmp_str);

    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",strcmp(s1,s3));
    printf("%d\n",strcmp(s2,s3));

    printf("Length of string 1: %d\n",strlen(s1));
    strcpy(rev_str, strrev(s1));
    puts(rev_str);

return 0;
    }  */ ///librery function er kaj gula show kora

 /* int main(){
    char org_str[51], cp_str[51];
    gets(org_str);

    int i=0;

    while(org_str[i]!='\0'){
        cp_str[i]=org_str[i];
        i++;
    }
    puts(cp_str);

  }  */ ///string copy kora


 /* int main(){
  char s1[51],s2[51];
  gets(s1);
  gets(s2);
   int length=strlen(s1);
   int i;

   for(i=0; s2[i]!='\0';i++){
    s1[length+i]=s2[i];
   }
   s1[length+i]='\0';
   puts(s1);

  }  */ ///string jukto kora

/*#include<string.h>
int main()
{
    char s1[51];
    gets(s1);

    int length=0;
    while(s1[length]!='\0'){
        length++;
        }

        for(int i=0, j=length-1;i<j; i++, j--)
        {
            char tmp=s1[i];
                s1[i]=s1[j];
                s1[j]=tmp;
        }

    puts(s1);

} */ ///reverse kora


