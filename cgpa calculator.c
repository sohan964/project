/******************************************************************************
 CGPA calcutor
*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[100];
    int id,credit;
    int math,csc,art,eng;
    double m,c,a,e;
    printf("enter your full name:");
    fgets(name,100,stdin);
    printf("enter your id:");
    scanf("%d",&id);
    printf("enter credit hour:");
    scanf("%d",&credit);
    printf("enter your math result:");
    scanf("%d",&math);
    printf("enter your csc result:");
    scanf("%d",&csc);
    printf("enter your art result:");
    scanf("%d",&art);
    printf("enter your eng result:");
    scanf("%d",&eng);
    printf("\n");
    if((math>=90 && math<=100)||(csc>=90 && csc<=100)||(art>=90 && art<=100)||(eng>=90&& eng<=100))
    {
        if(math>=90 && math<=100)
        {
            printf("Math= A\n");
            m=4.0;
        }
        if(csc>=90 && csc<=100)
        {
            printf("csc= A\n");
            c=4.0;
        }
        if(art>=90 && art<=100)
        {
            printf("art= A\n");
            a=4.0;
        }
        if(eng>=90 && eng<=100)
        {
            printf("eng= A\n");
            e=4.0;
        }
        
    }
    if((math>=87 && math<=89)||(csc>=87 && csc<=89)||(art>=87 && art<=89)||(eng>=87 && eng<=89))
    {
        if(math>=87 && math<=89)
        {
            printf("Math= B+\n");
            m=3.7;
        }
        if(csc>=87 && csc<=89)
        {
            printf("csc= B+\n");
            c=3.7;
        }
        if(art>=87 && art<=89)
        {
            printf("art= B+\n");
            a=3.7;
        }
        if(eng>=87 && eng<=89)
        {
            printf("eng= B+\n");
            e=3.7;
        }
    
    }
    if((math>=84 && math<=86)||(csc>=84 && csc<=86)||(art>=84 && art<=86)||(eng>=84 && eng<=86))
    {
        if(math>=84 && math<=86)
        {
            printf("Math= B\n");
            m=3.4;
        }
        if(csc>=84 && csc<=86)
        {
            printf("csc= B\n");
            c=3.4;
        }
        if(art>=84 && art<=86)
        {
            printf("art= B\n");
            a=3.4;
        }
        if(eng>=84 && eng<=86)
        {
            printf("eng= B\n");
            e=3.4;
        }
    
    }
    if((math>=80 && math<=83)||(csc>=80 && csc<=83)||(art>=80 && art<=83)||(eng>=80 && eng<=83))
    {
        if(math>=80 && math<=83)
        {
            printf("Math= B-\n");
            m=3.1;
        }
        if(csc>=80 && csc<=83)
        {
            printf("csc= B-\n");
            c=3.1;
        }
        if(art>=80 && art<=83)
        {
            printf("art= B-\n");
            a=3.1;
        }
        if(eng>=80 && eng<=83)
        {
            printf("eng= B-\n");
            e=3.1;
        }
    
    }
    if((math>=77 && math<=79)||(csc>=77 && csc<=79)||(art>=77 && art<=79)||(eng>=77 && eng<=79))
    {
        if(math>=77 && math<=79)
        {
            printf("Math= C+\n");
            m=2.8;
        }
        if(csc>=77 && csc<=79)
        {
            printf("csc= C+\n");
            c=2.8;
        }
        if(art>=77 && art<=79)
        {
            printf("art= C+\n");
            a=2.8;
        }
        if(eng>=77 && eng<=79)
        {
            printf("eng= C+\n");
            e=2.8;
        }
    
    }
    if((math>=74 && math<=76)||(csc>=74 && csc<=76)||(art>=74 && art<=76)||(eng>=74 && eng<=76))
    {
        if(math>=74&& math<=76)
        {
            printf("Math= C\n");
            m=2.5;
        }
        if(csc>=74 && csc<=76)
        {
            printf("csc= C\n");
            c=2.5;
        }
        if(art>=74 && art<=76)
        {
            printf("art= C\n");
            a=2.5;
        }
        if(eng>=74 && eng<=76)
        {
            printf("eng= C\n");
            e=2.5;
        }
    
    }
    if((math>=70 && math<=73)||(csc>=70 && csc<=73)||(art>=70 && art<=73)||(eng>=70 && eng<=73))
    {
        if(math>=70&& math<=73)
        {
            printf("Math= C-\n");
            m=2.2;
        }
        if(csc>=70 && csc<=73)
        {
            printf("csc= C-\n");
            c=2.2;
        }
        if(art>=70 && art<=73)
        {
            printf("art= C-\n");
            a=2.2;
        }
        if(eng>=70 && eng<=73)
        {
            printf("eng= C-\n");
            e=2.2;
        }
    
    }
    if((math>=65 && math<=69)||(csc>=65 && csc<=69)||(art>=65&& art<=69)||(eng>=65 && eng<=69))
    {
        if(math>=65&& math<=69)
        {
            printf("Math= D+\n");
            m=1.5;
        }
        if(csc>=65 && csc<=69)
        {
            printf("csc= D+\n");
            c=1.5;
        }
        if(art>=65 && art<=69)
        {
            printf("art= D+\n");
            a=1.5;
        }
        if(eng>=65 && eng<=69)
        {
            printf("eng= D+\n");
            e=1.5;
        }
    
    }
    if((math>=60 && math<=64)||(csc>=60 && csc<=64)||(art>=60&& art<=64)||(eng>=60 && eng<=64))
    {
        if(math>=60&& math<=64)
        {
            printf("Math= D\n");
            m=1.0;
        }
        if(csc>=60 && csc<=64)
        {
            printf("csc= D\n");
            c=1.0;
        }
        if(art>=60 && art<=64)
        {
            printf("art= D\n");
            a=1.0;
        }
        if(eng>=60 && eng<=64)
        {
            printf("eng= D\n");
            e=1.0;
        }
    
    }
    if((math<60)||(csc<60)||(art<60)||(eng<60))
    {
        if(math<60)
        {
            printf("Math= F\n");
            m=0.0;
        }
        if(csc<60)
        {
            printf("csc= F\n");
            c=0.0;
        }
        if(art<60)
        {
            printf("art= F\n");
            a=0.0;
        }
        if(eng<60)
        {
            printf("eng= F\n");
            e=0.0;
        }
    
    }
    
    
    double m1=(m*3),c1=(c*4),a1=(a*2),e1=(e*3);
    double cgpa=(m1+c1+a1+e1)/credit;
    
    printf("\n%s%d\nCGPA : %0.2lf\n",name,id,cgpa);

    return 0;
}
