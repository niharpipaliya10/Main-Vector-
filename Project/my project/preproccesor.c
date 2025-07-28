#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define sys_path "C:/MinGW/include" // file path for copy
#define MAX_MACROS 100
typedef struct 
{
    char name[100];
    char value[100];

}Macro;

/*macro table*/
Macro macros[MAX_MACROS];
int macro_count=0;

/* ****** Function Declaration ******* */
void comment_remove(const char *, char *); // coment remove
void include_headerfile(const char *, FILE *);
int valid_formate(const char *);
void handle_macro_def(const char *);
void replace_macro(char *);
int space(char );
void main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("usage: ./a.out inputfilename\n");
        return ;
    }

    FILE *inf, *outf;
    char ch;
    int mlen = 0, clen = 0, count = 0;

    inf = fopen(argv[1], "r"); // open file in read mode

    if (!inf)
    {
        printf("Error: file not open\n");
        return ;
    }

    while ((ch = fgetc(inf)) != EOF) // find maxline in file
    {
        clen++;
        if (ch == '\n')
        {
            count++;
            if (clen > mlen)
            {
                mlen = clen;
            }
            clen = 0;
        }
    }
    rewind(inf);

    int i;
    char **line = malloc(sizeof(char *) * count); // memory allocate total line
    for (i = 0; i < count; i++)
    {
        line[i] = malloc(mlen + 1);    // memory allocate in single line
        fgets(line[i], mlen + 1, inf); // scan the string frome file
    }
    fclose(inf); // input file close

    // create outfile name
    char *output_filename = malloc(strlen(argv[1]) + 3);
    strcpy(output_filename, argv[1]);
    strcat(output_filename, ".i");

    outf = fopen(output_filename, "w"); // open new file
    if (!outf)
    {
        printf("Error: file not open\n");
        free(output_filename);
        for (i = 0; i < count; i++)
        {
            free(line[i]);
        }

        free(line);
        return;
    }
    char *p = malloc(mlen + 1);
    char *rline = malloc(mlen + 1);
    const char *start,*end;
    int len;
    for (i = 0; i < count; i++)
    {
        strcpy(p, line[i]);
        if(strncmp(p,"#define",7)==0)
        {
           handle_macro_def(p);
        }
        /* ***** header file include ****** */
        if (strncmp(p, "#include", 8) == 0)
        {
            const char *ptr = p + 8;
            while(space(*ptr))
            {
                ptr++;
            }
            if(*ptr=='"')
            {
                 start=strchr(ptr,'"');
                 end=strchr(start+1,'"');
                if(start&&end)
                {
                    len=end-start+1;
                    char *hfile=malloc(len+1);
                    strncpy(hfile,start+1,len);
                    hfile[len]='\0';
                    include_headerfile(hfile,outf);
                    free(hfile);
                    

                }
            }
            else if(*ptr=='<')
            {
                 start=strchr(ptr,'<');
                 end=strchr(start+1,'>');
                 if(start&&end)
                 {
                    len=end-start-1;
                    char *hfile=malloc(len+1);
                    strncpy(hfile,start+1,len);
                    hfile[len]='\0';

                    char *path=malloc(strlen(sys_path)+1+len+1);
                    strcpy(path,sys_path);
                    strcat(path,"/");
                    strcat(path,hfile);
                    include_headerfile(path,outf);
                    free(hfile);
                    free(path);
                 }
            }
            else
            {
                if(!valid_formate(p))
                {
                   printf("warning: Invalid format\n");

                }
            }

        }
        comment_remove(line[i], rline); // comment remove
        replace_macro(rline);
        fputs(rline, outf);
    }
    fclose(outf);
    free(output_filename);
    free(rline);
    for (i = 0; i < count; i++)
    {
        free(line[i]);
    }
    free(line);
}
/* ***** Function Declaration ***** */
void comment_remove(const char *p, char *rline)
{
    int i = 0, j = 0;
    static int multi_line = 0;
    while (p[i] != '\0')
    {
        if (multi_line)
        {
            if (p[i] == '*' && p[i + 1] == '/')
            {
                multi_line = 0;
                i += 2;
            }
            else
            {
                i++;
            }
        }
        else if (p[i] == '/' && p[i + 1] == '*')
        {
            multi_line = 1;
            i += 2;
        }
        else if (p[i] == '/' && p[i + 1] == '/')
        {
            break;
        }
        else
        {
            rline[j++] = p[i++];
        }
    }
    rline[j] = '\0';
}
int space(char c)
{
    
   return c==' '||c== '\t'||c=='\n'||c=='\r';
}
void include_headerfile(const char *filename,FILE *outputf)
{
    FILE *head =fopen(filename,"r");
    if(head==NULL)
    {
        printf("error :file is not open\n");
        return;
    }
    char ch;
    while((ch=fgetc(head))!=EOF)
    {
        fputc(ch,outputf);
    }
    fclose(head);
}
int valid_formate(const char *p)
{
    while(*p!='\0')
    {
        if(space(*p))
        {
            p++;
        }
        if(strncmp(p,"#include",8)==0)
        {
            p =p+8;
            while(space(*p))
            {
                p++;
            }
            return (*p=='"'||*p=='<');
        }
        break;
    }
    return 0;
}

void handle_macro_def(const char *p)
{
    const char *ptr=p+7;
    while(space(*ptr))
    {
        ptr++;
    }
    char name[100],value[100];
    int i=0;
    while(*ptr&&!space(*ptr)&&i<sizeof(name)-1)
    {
        name[i++]=*ptr++;
    }
    name[i]='\0';
    while(space(*ptr))
    {
        ptr++;
    }
    i=0;
    while(*ptr&&*ptr!='\n'&&i<sizeof(name)-1)
    {
        value[i++]=*ptr++;
        value[i]='\0';
    }
    if(strlen(name)>0&& strlen(value)>0)
    {
        strcpy(macros[macro_count].name,name);
        strcpy(macros[macro_count].value,value);
        macro_count++;
    }
}

void replace_macro(char *p)
{
    char temp[1000];
    char word[100];
    int i=0,j=0;
    while(p[i]!='\0')
    {
        if(space(p[i]))
        {
            temp[j++]=p[i++];
        }
        int k=0;
        while(p[i]!='\0'&&!space(p[i])&&k<sizeof(word)-1)
        {
            word[k++]=p[i++];
        }
        word[k]='\0';

        int replace=0,m;
        for(m=0;m<macro_count;m++)
        {
            if(strcmp(word,macros[m].name)==0)
            {
                strcpy(&temp[j],macros[m].value);
                j=j+strlen(macros[m].value);
                replace=1;
                break;
            }
        }
        if(!replace)
        {
            strcpy(&temp[j],word);
            j=j+strlen(word);
        }
    }
    temp[j]='\0';
    strcpy(p,temp);
}