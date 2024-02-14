#include <stdio.h>

int main()
{
   int n; 
   printf ("enter size of array\n");
   scanf ("%d",&n);
   int arr[n];
   printf ("enter elements of array\n");
   for (int i=0;i<n;i++){
       scanf ("%d",&arr[i]);
   }
   int temp;
for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        if (arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf ("elements in ascending order are\n");
for (int i=0;i<n;i++){
    printf ("%d",arr[i]);
}
printf ("\nthe elements of array is \n");
for (int i=0;i<n;i++){
    printf ("% 5d",arr[i]);
}
int inval,p;
printf ("\n write the value which is insert\n");
scanf ("%d",&inval);

int *ap = arr;

for (int i=0;i<n;i++){
    if (*(ap+i)>inval){
        p=i;
        break;
    }
    else {
        p=i+1;
    }
}
for (int i=n;i>p;i--){
    *(ap+i)=*(ap +i-1);
}
*(ap+p) =inval;
printf ("value is inserted in array \n");
for (int i=0;i<=n;i++){
    printf ("% 5d",arr[i]);
}
    return 0;
}
