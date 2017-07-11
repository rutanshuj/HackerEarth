#include<stdio.h>
#include<string.h>


int	changeIndex(char array[], int int_arr[]);
int primeSpots(char array[], int int_arr[]);

int i, j, count=0;
int main ()
{
    int T, N, Q, k;
    scanf("%d", &T);
    if(T>=1 && T<=10){
    	for(k=0; k<T; k++){
        scanf("%d", &N);
        if(N>=1 && N<=32000){
            int A[i];
            for(i=1; i<=N; i++){
                scanf("%d", &A[i]);
                printf("Done taking value");
            }
            printf("Totality");
            scanf("%d", &Q);
            for(j=1; j<=Q; j++){
                    if(Q>=1 && Q<=20000){
                    char q[4];
                    for(i=1; i<=N; i++){
                        scanf("%c", &q[i]);
                    }
                    if(q[1]=='A'){changeIndex(q, A);}
                    else if(q[1]== 'C'){
					primeSpots(q, A);
					printf("%d", count);
					}
                    }
            	}
        	}
    	}
	}
    return 0;
}

changeIndex(char query_array[], int int_arr[]){
    int X = query_array[2];
    int Y = query_array[3];
	int_arr[X] = X+Y;
	//return int_arr;
}
primeSpots(char query_array[], int int_arr[]){
	int number, prime_flag=1;
    int X = query_array[2];
    int Y = query_array[3];
    for(i=X; i<=Y; i++){
    	number = int_arr[i];
    	for(j=2; j<number/2; i++){
    		if(number%j==0){
    			prime_flag = 0;
    			break;
    		}
		}if(prime_flag==1){
			count=count+1;
		}
	}
	return count;
}
