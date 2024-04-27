#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void help(){
    printf("alap v0.1\n\n");
    printf("Usage: alap <template_id> [options]\n\n");
    printf("Available options:\n\n");
    printf("-h, --help\t\tshow this help\n");
    printf("-v, --version\t\tversion info\n");
    printf("--stdout\t\tdon't create source file, print rsult to stdout\n\n");
    printf("Available templates:\n\n");
    printf("* c \t- C source code [main.c]\n");
    printf("* cs\t- C# source code [main.cs]\n");
    printf("* py\t- Python 3 source code [main.py]\n");
    printf("* sh\t- Bash source code [main.sh]\n");
}

void version(){
    printf("alap v0.1\n");
}

void c(int i){
    char *s="#include <stdio.h>\n\nint main(){\n\nprintf(\"Hello world!\");\n\nreturn 0;\n}\n";
    if(i==3){
        printf("%s",s);
    }
    else{
        FILE *f;
        f=fopen("main.c","w");
        fprintf(f,"%s",s);
        fclose(f);
    }
    
}

void cs(int i){
    char *s="namespace HelloWorld\n{\n\tclass Hello {\n\t\tstatic void Main(string[] args)\n\t\t{\n\t\t\tSystem.Console.WriteLine(\"Hello World!\");\n\t\t}\n\t}\n}\n";
     if(i==3){
        printf("%s",s);
    }
    else{
        FILE *f;
        f=fopen("main.cs","w");
        fprintf(f,"%s",s);
        fclose(f);
    }
}

void py(int i){
    char *s="print(\"Hello World!\")\n";
     if(i==3){
        printf("%s",s);
    }
    else{
        FILE *f;
        f=fopen("main.py","w");
        fprintf(f,"%s",s);
        fclose(f);
    }
}

void sh(int i){
    char *s="#!/bin/bash\necho \"Hello World!\"\n";
     if(i==3){
        printf("%s",s);
    }
    else{
        FILE *f;
        f=fopen("main.sh","w");
        fprintf(f,"%s",s);
        fclose(f);
    }
}

int main(int argc, const char *argv[]){
    
    if(argc >3){
        printf("Hiba! Túl sok argumentum!\n");
        exit(1);
    }
    else if(argc==3 && strcmp(argv[2],"--stdout")!=0){
        printf("Hiba! Rossz argumentum!\n");
        exit(0);
    }
    else if(argc==1 || strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--help")==0){
        help();
        exit(0);
    }

    else if(strcmp(argv[1],"-v")==0 || strcmp(argv[1],"--version")==0){
        version();
        exit(0);
    }
    else if(strcmp(argv[1],"c")==0){
        c(argc);
        exit(0);
    }
    else if(strcmp(argv[1],"cs")==0){
        cs(argc);
        exit(0);
    }
    else if(strcmp(argv[1],"py")==0){
        py(argc);
        exit(0);
    }
    else if(strcmp(argv[1],"sh")==0){
        sh(argc);
        exit(0);
    }
    else{
        printf("Hiba! Valamit nem helyesen adott meg!\n");
        exit(1);
    }

    return 0;
}