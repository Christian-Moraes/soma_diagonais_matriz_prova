#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char**argv){
    int matriz[6][6];
    int i, j;
    int soma=0;
    int soma1=0;


    srand( time( NULL ) );

    printf( "Matriz:\n" );
    for( i = 0; i < 6; i++ ){
        for( j = 0; j < 6; j++ ){
            matriz[i][j] = 6 + rand() % 5;
            printf( "%3d", matriz[i][j] );
            if( i==j ){
                soma += matriz[i][j];
            }
            if(i-j==i){
                soma1 += matriz[i][j];
            }
        }
        printf( "\n" );
    }
    
    
    
    printf( "soma diagonal principal: %d ", soma);
    printf( "\nsoma diagonal secundaria: %d", soma1 );
  
    
    return 0;
}