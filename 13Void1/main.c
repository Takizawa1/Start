#include <stdio.h>
#include <stdlib.h>

#define len4Define 4

int main()
{
    printf("Hello world!\n");

    int n0 = 0;
    int n1 = 1;
    int n2 = 2;

    int tab[10];
    tab[0] = 11;
    tab[1] = 12;
    tab[2] = 13;
    tab[3] = 14;
    tab[4] = 15;
    tab[5] = 21;
    tab[9] = 25;
    printf("simple print\n");
    printf("n0: %d, n1: %d\n", n0, n1);
    printf("tab0: %d, tab1: %d, tab5: %d\n",
           tab[0], tab[1], tab[5]);

    printf("\nloop for print\n");
    for(int i = 0; i < 10; i++){
        printf("tab - index: %d, value: %d, adress, %d\n",
           i, tab[i], &tab[i]);
    }
    printf("tab - index: %d, value: %d, adress, %d\n",
           0, tab[0], &tab[0]);
    printf("tab - index: %d, value: %d, adress, %d\n",
           0, tab[0], tab);



    printf("\nloop for init tab\n");
    int tab2[10];

    for(int i = 0; i < 10; i++){
        tab2[i] = 0;
    }

    for(int i = 0; i < 10; i++){
        printf("tab2 - index: %d, value: : %d\n",
           i, tab2[i]);
    }

    printf("\n2nd init tab\n");
    int tab3[10] = { 0, 1, 2, 55};
    for(int i = 0; i < 10; i++){
        printf("tab3 - index: %d, value: : %d\n",
           i, tab3[i]);
    }

    printf("\n3th init tab with len\n");


    printf("\nenum print\n");
    enum { mon, thu, wen=5, fri };

    printf("%d, %d, %d, %d\n", mon, thu, wen, fri);


    printf("\n4th tab4 info\n");

    const int len4 = wen;
    char tab4[wen] = { };

    int tab4Len = sizeof(tab4) / sizeof(tab4[0]);//sizeof(int); // sizeof(tab4[0])
    printf("size of tab 4: %d\n", tab4Len );

    for(int i = 0; i < len4; i++){
        printf("tab4 - index: %d, value:  %d\n",
           i, tab4[i]);
    }

    printf("\ncstring info\n");
    char cstring[] = "atekst abcd";
    int cstringLen = sizeof(cstring) / sizeof(cstring[0]);

    for(int i = 0; i < cstringLen; i++){
        printf("cstring - index: %d, value: %d, char %c\n",
           i, cstring[i], cstring[i]);
    }
    printf("\ncipher info\n");
    for(int i = 0; i < cstringLen; i++){
        printf("%c", cstring[i]);
    }


    char cipher[100];
    int key = 1;
    for(int i = 0; i < cstringLen -1 ; i++){
        cipher[i] = cstring[i] + key;
    }
    printf("\n");
    for(int i = 0; i < cstringLen; i++){
        printf("%c", cipher[i]);
    }

    printf("\ncstring info v2 \n");
    printf("%s", cstring);

    printf("\n2dim tab info\n");

    int tab2dim[3][2] = {
        { 11,12},
        { 21,22},
        { 31,32 }
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("i=%d, j=%d, value=%d\n", i, j, tab2dim[i][j]);
        }
    }

/*    printf("\nadress &\n");
    int keyValue = 0;
    scanf("%d", &keyValue);
    printf("%d\n\n",keyValue);
    char keyCString[10];
    scanf("%s", keyCString);
    printf("%s\n",keyCString);
*/

    return 0;
}
