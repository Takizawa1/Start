#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("Lab3Task4-5\n");

    printf("n\Random \n");

    srand(time(NULL));
    int r = rand();
    int r2 = rand();
    printf("r = %d\n",r);
    printf("r2 = %d\n",r2);
    printf("\nTab \n");
    enum { len = 10};
    int tab[len];
    int tab2[len];

    for(int i=0; i<len; i++)
        tab[i] = i+11;
        tab2[i] = rand() % 10;
}
    int sum = 0;
    printf("Before sum=%d\n",sum);
    for(int i=0; i< len;i++){
        printf("tab2 %d\n", tab2[i]);
        sum = sum + tab2[i]; //sum += tab2[i];
        printf("in loop sum=%d\n",sum);
    }
    printf("After loop sum=%d\n", sum);
    printf("\nMax Min element\n", sum);
    int minValue = tab2[0];
    for(int i=0; i< len;i++)
    {
        if(tab2[i] < minValue)
        {
            minValue = tab2[i];
        }
       printf("in loop minValue=%d\n",minValue);

    }
    printf("After loop minValue=%d\n",minValue);


    return 0;
}
