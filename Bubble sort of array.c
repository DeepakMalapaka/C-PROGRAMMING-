#include<stdio.h>
int main() {

int n, i, temp, j;
printf("enter the length of array");
scanf("%d", &n);
printf("enter %d elements", n);
int a[n] ;
   for(i=0;i<n;i++){
   scanf("%d", & a[i] );
   } 
  for(i=0;i<n-1;i++) {
      for(j=0;j<n-i-1;j++) {
          if(a[j] >a[j+1]){
            temp=a[j] ;
            a[j]=a[j+1];
            a[j+1]=temp;
           } 
         } 
      } 
      
      for(i=0;i<n;i++) {
       printf("%d\n", a[i] );
      }




      return 0;
}
























