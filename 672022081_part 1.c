#include<stdio.h>
#include<stdlib.h>
int main(){
 int n, i, j, k;
 puts("1. level 1");
 puts("2. level 2");
 puts("3. level 3");
 puts("4. exit");


 printf("pilih menu : ");
 scanf("%d", &n);
   system("cls");
 switch(n){
    case 1 :
        {
        printf("masukkan angka : ");
        scanf("%d", &n);

            for(i=0;i<=n+1;i++) {
                    k=i;
                for(j=0;j<i;j++){
                printf("%3d", k-1);
            k++;
            }
            printf("\n");
        }
        break;
        }
    case 2 :
        {

        }

 }

}
