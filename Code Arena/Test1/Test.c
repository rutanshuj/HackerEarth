#include<string.h>
#include<stdio.h>

int main(){
	int N, i, j, k;
	scanf("%d", &N);
	if(1 <= N && N <= 1000000){
	char a[N-1][6];
	char temp[5];
    for(i=0; i<N; i++){
        scanf("%5s", a[i]);
    }
		for(i=0; i<N; i++){
			for(j=i+1;j<N;){
				if(strcmp(a[i],a[j])==0){
					for(k=j+1; k<N; k++){
						memcpy(a[k-1], a[k], 5);
					}
					N--;
				}else{
					j++;
				}
			}
        }
        k = N;
        for(i=0; i<k-1; i++){
              for(j=i+1; j<k; j++){
                 if(strcmp(a[i], a[j]) >0){
                    strcpy(temp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
		for(i=0; i<k; i++){
			printf("%s\n", a[i]);
		}
	}
	return 0;
}
