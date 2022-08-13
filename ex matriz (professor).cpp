#include <stdio.h>

int main (){
    int v[3][3];
    int i,j;

for (i=0 ; i < 3 ; i++)
        for (j=0; j<3; j++)
           scanf ("%d", &v[i][j]);

for (i=0 ; i < 3 ; i++)
        for (j=0; j<3; j++)
           printf ("v[%d][%d] = %d\n",i,j,v[i][j]);


}