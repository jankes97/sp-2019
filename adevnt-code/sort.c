#include <stdio.h>
int a[996], i=0, j=0, t;
 
int main(void)
{    
    for(i; i<996; i++){
    //printf("Podaj liczbe: ");
    scanf("%d", &a[i]);
    }

    for(i=0; i<996; i++) 
    {
        printf("%d\n", a[i]);
    }

    for(j; j<996; j++)
    {
        for(i=0; i<995; i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
 
    printf("\nPosortowane:\n");  
    for(i=0; i<996; i++) 
    {
        printf("A[%d] = %d\n",i, a[i]);
        if (a[i] == a[i+1])
        {
            printf("TUTAJ: --> A[%d] = %d\n", i, a[i]);
        }
    }
//system("PAUSE");
}