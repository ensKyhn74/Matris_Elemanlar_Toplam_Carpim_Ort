#include <stdio.h>
// 2 boyutlu dizinin satır ve sütun sayısı klavyeden girilir.
// elemanlarının toplamı,çarpımı ve ortalaması bulunur.

int main() 

{
    
 int i,j;
 int m,n;
 int toplam = 0;
 int carpim = 1;
 
 printf("dizinin satir sayisini girin: ");
 scanf("%d",&m);
 
 printf("dizinin sutun sayisini girin: ");
 scanf("%d",&n);
 
 int dizi[m][n]; 
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   printf("dizi[%d][%d]: ",i,j);
   scanf("%d",&dizi[i][j]);
  }
 }
 
 printf("\n");
 
 for(i = 0 ; i < m ; i++)
 {
  for(j = 0 ; j < n ; j++)
  {
   toplam += dizi[i][j];
   carpim *= dizi[i][j];
  }
 }
 
 printf("dizinin elemanlarinin toplami: %d\n",toplam);
 printf("dizinin elemanlarinin carpimi: %d\n",carpim);
 printf("dizinin elemanlarinin ortalamasi: %.2f\n",(float)toplam/(m*n));

 return 0;
  
}