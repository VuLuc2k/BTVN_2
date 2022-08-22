#include<stdio.h>

int s1[] = {1 ,2 , 5, 13, 17, 19, 21};// Mang 1 voi 7 ptu
int s2[] = {47, 74, 21, 174, 196, 14, 34};// mang 2 voi 7 ptu
int s3[14] ;

void gop( int s1[], int s2[], int s3[]){
    for(int i = 0; i < 14; i++)
    {
        if(i < 7)
        s3[i] = s1[i];
        else s3[i] = s2[i - 7];
    }
}

int timkiem(int s3[], int x)
{
    int i;
    for(i = 0; i < 14; i++)
    if(s3[i] == x){

    printf("Tim thay %d o vi tri a[%d]", x, i);
    
}
}

void tangdan()
{
    int z;
    for(int i = 0; i < 13; i++){
        for (int j = i + 1; j < 14; j++ ){
            if(s3[i] > s3[j]){
                z = s3[i];
                s3[i] = s3[j];
                s3[j] = z;
            }
        }
    }
}

void giamdan()
{
    int z;
    for(int i = 0; i < 13; i++){
        for (int j = i + 1; j < 14; j++ ){
            if(s3[i] < s3[j]){
                z = s3[i];
                s3[i] = s3[j];
                s3[j] = z;
            }
        }
    }

}

void XuatMang(int s3[]){
    for(int i = 0;i < 14; ++i){
        printf("\nPhan tu a[%d] = %d", i, s3[i]);
    }
}

int main()
{
    int x;
    gop(s1, s2, s3);
    printf("Nhap gia tri can tim\n");
    scanf("%d", &x);
    timkiem(s3, x);
    tangdan();
    printf("\nXuat mang tang dan\n");
    XuatMang(s3);
    
    giamdan();
    printf("Xuat mang giam dan\n");
    XuatMang(s3);

}