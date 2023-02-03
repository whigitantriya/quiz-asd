#include<stdio.h>
#include<stdlib.h>
int main(){
 int n, i, j, k;

    ulang:
    puts("========================================");
    puts("             TUGAS QUIZ ASD             ");
    puts("========================================");
    puts("1. level 1");
    puts("2. level 2");
    puts("3. level 3");
    puts("4. exit");
    puts("========================================");

     printf("pilih menu : ");
     scanf("%d", &n);
       system("cls");
     switch(n){
        case 1 :

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
            getch();
            printf("Press any key to continue . . . .");
            getch();
            system("cls");
            goto ulang;
            break;

        case 2 :

            printf("masukkan angka : ");
            scanf("%d", &n);

                for(i=1; i<=n; i++){
                    for(j=1;j<=i;j++){
                        printf("%3d", i*j);
                    }
                    printf("\n");
                }
            getch();
            printf("Press any key to continue . . . .");
            getch();
            system("cls");
            goto ulang;
            break;

        case 3:
            printf("masukkan angka : ");
            scanf("%d", &n);

            for (i=1; i<=n; i++){
                for (j=1; j<=n-i; j++){
                printf(" ");
                }
            for (k=1; k<=i; k++){
                printf("%d", k);
                }
            for (j=i-1; j>=1; j--){
                printf("%d", j);
                }
                printf("\n");
            }
            for (i=n-1; i>=1; i--){
                for (k=1; k<=n-i; k++){
                printf(" ");
                }
            for (j=1; j<=i ;j++){
                printf("%d", j);
                }
            for (j=i-1; j>=1; j--){
                printf("%d", j);
                }
                printf("\n");
            }
            getch();
            printf("Press any key to continue . . . .");
            getch();
            system("cls");
            goto ulang;
            break;

        case 4:
            printf("TERIMA KASIH");
            break;

        default :
            printf("Menu Tidak Tersedia");
     }
return 0;
}


