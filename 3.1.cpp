#include<stdio.h>
int main()
{
    int n;
    int a[1000];
    do{
        printf("Nhap so phan tu mang:");
        scanf("%d", &n);
        if (n<1||n>1000){
        	printf("So luong phan tu cua mang phai lon hon hoac bang 1 va nho hon 1000!!");
		}
    }while(n<1||n>1000);
    
    for(int i=0; i< n; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    

    for(int i=0; i< n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        if(a[i]>a[j])
        {
            int tam = a[i];
            a[i] = a[j];
            a[j] = tam;
        }
    }
    printf("Mang sau khi sap xep la:");
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}
