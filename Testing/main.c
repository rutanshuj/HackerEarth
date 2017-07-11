#include<stdio.h>
#include<string.h>


int	changeIndex(int array[], int int_arr[]);
int primeSpots(int array[], int int_arr[]);

int i, j, count=0;
int main ()
{
    int T, N, Q, k;
    char query_flag;
    scanf("%d", &T);
    if(T>=1 && T<=10){
    	for(k=0; k<T; k++){
        scanf("%d", &N);
        if(N>=1 && N<=32000){
            int A[N];
                for(i=1; i<=N; i++){
                scanf("%d", &A[i]);
            }
            scanf("%d", &Q);
            if(Q>=1 && Q<=20000){
                    for(j=0; j<Q; j++){
                    int q[2];
                    for(i=1; i<=2; i++){
                        scanf("%c", &query_flag);
                        scanf("%d", &q[i]);
                    }
                    if(query_flag =='C'){changeIndex(q, A);}
                    else if(query_flag == 'A'){
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
changeIndex(int query_array[], int int_arr[]){
    int X = query_array[1];
    int Y = query_array[2];
	int_arr[X] = X+Y;
}
primeSpots(int query_array[], int int_arr[]){
	int number, prime_flag=1;
    int X = query_array[1];
    int Y = query_array[2];
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
