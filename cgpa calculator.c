/******************************************************************************
 CGPA calcutor
*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[100];
    int id;
    int math,csc,art,eng;
    printf("enter your full name:");
    fgets(name,100,stdin);
    printf("enter your id:");
    scanf("%d",&id);
    printf("enter your math result:");
    scanf("%d",&math);
    printf("enter your csc result:");
    scanf("%d",&csc);
    printf("enter your art result:");
    scanf("%d",&art);
    printf("enter your eng result:");
    scanf("%d",&eng);
    if((math>=90 && math<=100)||(csc>=90 && csc<=100)||(art>=90 && art<=100)||(eng>=90&& eng<=100))
    {
        if(math>=90 && math<=100)
        {
            printf("Math= A\n");
        }
        if(csc>=90 && csc<=100)
        {
            printf("csc= A\n");
        }
        if(art>=90 && art<=100)
        {
            printf("art= A\n");
        }
        if(eng>=90 && eng<=100)
        {
            printf("eng= A\n");
        }
    
    }
    if((math>=87 && math<=89)||(csc>=87 && csc<=89)||(art>=87 && art<=89)||(eng>=87 && eng<=89))
    {
        if(math>=87 && math<=89)
        {
            printf("Math= B+\n");
        }
        if(csc>=87 && csc<=89)
        {
            printf("csc= B+\n");
        }
        if(art>=87 && art<=89)
        {
            printf("art= B+\n");
        }
        if(eng>=87 && eng<=89)
        {
            printf("eng= B+\n");
        }
    
    }
    if((math>=84 && math<=86)||(csc>=84 && csc<=86)||(art>=84 && art<=86)||(eng>=84 && eng<=86))
    {
        if(math>=84 && math<=86)
        {
            printf("Math= B\n");
        }
        if(csc>=84 && csc<=86)
        {
            printf("csc= B\n");
        }
        if(art>=84 && art<=86)
        {
            printf("art= B\n");
        }
        if(eng>=84 && eng<=86)
        {
            printf("eng= B\n");
        }
    
    }
    if((math>=84 && math<=86)||(csc>=84 && csc<=86)||(art>=84 && art<=86)||(eng>=84 && eng<=86))
    {
        if(math>=84 && math<=86)
        {
            printf("Math= B\n");
        }
        if(csc>=84 && csc<=86)
        {
            printf("csc= B\n");
        }
        if(art>=84 && art<=86)
        {
            printf("art= B\n");
        }
        if(eng>=84 && eng<=86)
        {
            printf("eng= B\n");
        }
    
    }
    if((math>=80 && math<=83)||(csc>=80 && csc<=83)||(art>=80 && art<=83)||(eng>=80 && eng<=83))
    {
        if(math>=80 && math<=83)
        {
            printf("Math= B-\n");
        }
        if(csc>=80 && csc<=83)
        {
            printf("csc= B-\n");
        }
        if(art>=80 && art<=83)
        {
            printf("art= B-\n");
        }
        if(eng>=80 && eng<=83)
        {
            printf("eng= B-\n");
        }
    
    }
    if((math>=77 && math<=79)||(csc>=77 && csc<=79)||(art>=77 && art<=79)||(eng>=77 && eng<=79))
    {
        if(math>=77 && math<=79)
        {
            printf("Math= C+\n");
        }
        if(csc>=77 && csc<=79)
        {
            printf("csc= C+\n");
        }
        if(art>=77 && art<=79)
        {
            printf("art= C+\n");
        }
        if(eng>=77 && eng<=79)
        {
            printf("eng= C+\n");
        }
    
    }

    return 0;
}
