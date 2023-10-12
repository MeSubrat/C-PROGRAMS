#include <stdio.h>
main()
{
    char alp;
    printf("enter an alphabet:") ; scanf("%c", &alp);
    switch (alp)
    {
    case 'a':
        printf("%c is a vowel");
        break;
    case 'e':
        printf("%c is a vowel");
        break;
    case 'i':
        printf("%c is a vowel");
        break;
    case 'o':
        printf("%c is a vowel");
        break;
    case 'u':
        printf("%c is a vowel");
        break;
    
        
    default:printf("%c is a consonant");
        break;
    }
}