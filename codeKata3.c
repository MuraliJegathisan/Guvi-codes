#include <stdio.h>
void main()
{
    char a;
    printf("INPUT\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Output\n");
        printf("Vowel");
    }
    else if(a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
    {
        printf("Output\n");
        printf("Constant");
    }
    else
    {
        printf("Output\n");
        printf("invalid");
    }

}
