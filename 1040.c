#include<stdio.h>

int main ()
{
    float N1,N2,N3,N4,N5,average,average2;
    printf("Enter the 4 scores: \n");
    scanf("%f %f %f %f",&N1, &N2, &N3, &N4);
    average = ( ( ( (N1*2) + (N2*3) + (N3*4) + (N4*1) ) /(2+3+4+1)) );
    printf("Media: %.1f\n",average);
    if( average >= 7.0)
    {
        printf("Aluno Aprovado. \n");
    }
    else if( average >= 5.0 )
    {
        printf("Aluno em exame. \n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f \n",N5);
        average2 = ( ( average + N5 ) / 2.0);
        if( average2 >= 5.0 )
        {
            printf("Aluno Aprovado. \n");
        }
        else
        {
            printf("Aluno reprovado. \n");
        }
        printf("Media final: %.1f \n",average2);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
