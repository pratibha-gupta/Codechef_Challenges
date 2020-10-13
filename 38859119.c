#include <stdio.h>
void merge(long arr[], long l, long m, long r)  
{  
    long i, j, k;  
    long n1 = m - l + 1;  
    long n2 = r - m;  
    long L[n1], R[n2];  

    for (i = 0; i < n1; i++)  
        L[i] = arr[l + i];  
    for (j = 0; j < n2; j++)  
        R[j] = arr[m + 1 + j]; 
    i = 0; 
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) {  
        if (L[i] <= R[j]) {  
            arr[k] = L[i];  
            i++;  
        }  
        else {  
            arr[k] = R[j];  
            j++;  
        }  
        k++;  
    }  
    while (i < n1) {  
        arr[k] = L[i];  
        i++;  
        k++;  
    }
    while (j < n2) {  
        arr[k] = R[j];  
        j++;  
        k++;  
    }  
}  
void mergeSort(long arr[], long l, long r)  
{  
    if (l < r) {  
        long m = l + (r - l) / 2;  
   mergeSort(arr, l, m);  
        mergeSort(arr, m + 1, r);  
  
        merge(arr, l, m, r);  
    }  
}  
  
int main() {
     long t;
     scanf("%ld",&t);
     while(t--){
         long n, x, p, k;
         scanf("%ld%ld%ld%ld",&n,&x,&p,&k);
         long a[1000000];
         for(long i =0; i< n; i++){
             scanf("%ld",&a[i]);
         }
         mergeSort(a, 0, n - 1); 
         if(a[p-1] == x){
              printf("0\n");
             continue;
         }

         if( p == k){
             if(p == 1 )
             {
                 if(x < a[p-1]){
                     printf("1\n");
                 } else {
                    long i = 1, j;
                     j = p;
                     while(a[j] < x && j < n){
                       i++;
                       j++;
                     }
                 printf("%ld\n",i);
                 } 
             } 
             else if (p == n){
                  if(x > a[p-1]){
                    printf("1\n");
                 } else {
                    long i = 1, j;
                     j = p-2;
                     while(a[j] > x && j >= 0){
                       i++;
                       j--;
                     }
                    printf("%ld\n",i);
                 } 
             }
             else 
             {
                  if(x < a[p-1]){
                     long i = 1, j;
                     j = p-2;
                     while(a[j] > x && j >= 0){
                       i++;
                       j--;
                     }
                    printf("%ld\n",i);
                 } else {
                     long i = 1, j;
                     j = p;
                     while(a[j] < x && j < n){
                       i++;
                       j++;
                 }
                 printf("%ld\n",i);
               }
             }
           
         }
         else if(p < k)
         {
             if(x > a[p-1]){
                  printf("-1\n");
             }else {
                 long i = 1, j;
                 j = p-2;
                 while(a[j] > x && j >=0){
                     i++;
                     j--;
                 }
                 printf("%ld\n",i);
             }
         } else {
             if(x < a[p-1]){
                 printf("-1\n");
             }else {
                 long i = 1, j;
                 j = p;
                 while(a[j] < x && j <n){
                     i++;
                     j++;
                 }
                 printf("%ld\n",i);
             }
         }
     }
	
	return 0;
}