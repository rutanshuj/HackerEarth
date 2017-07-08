#include<stdio.h>
#include<string.h>


char changeIndex(char array[]);
char primeSpots(char array[]);
int main ()
{
    int T, N, Q, i, j;
    scanf("%d", &T);
    if(T>=1 && T<=10){
        scanf("%d", &N);
        if(N>=1 && N<=32000){
            int A[i];
            for(i=0; i<N; i++){
                scanf("%d", &A[i]);
            }
            scanf("%d", &Q);
            for(j=0; j<Q; j++){
                    if(Q>=1 && Q<=20000){
                    char q[3];
                    for(i=1; i<=N; i++){
                        scanf("%c", &q[i]);
                    }
                    if(q[0]=='A'){changeIndex(q, A);}
                    else if(q[0]== 'C'){primeSpots(q, A);}
                    }
            }
        }
        }
    return 0;
}

changeIndex(char array[], int int_arr[]){
    int X = array[1];
    int Y = array[2];

    array[]
}
primeSpots(char aray[], int int_arr[]){
    int X = array[1];
    int Y = array[2];
}
