#include <string.h>
#include <stdio.h>

int main()
{
    int T, i, j,k, l;
    int temp;
    scanf("%d", &T);
    int N;
    if(T>=1 && T<=100){
        for(k=0;k<T;k++){
            //int N;
            scanf("%d", &N);
            if(N>=1 && N<=100000){
                int a[N];
                for(i=0; i<N; i++){
                    scanf("%d", &a[i]);
                }
                  for(i=0; i<N; i++){
                      for(j=i+1; j<N; j++){
                            if(a[i]<a[j]){
                                temp =a[i];
                                a[i] = a[j];
                                a[j] = temp;
                            }
                      }
                  }

                  for(i=0; i<N; i++){
                        printf("%d", a[i]);
                  }
            }
        }
    }
    return 0;
}
