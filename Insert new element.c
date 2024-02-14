#include <stdio.h>

int main()
{
int n ; 
printf ("enter size of array \n");
scanf ("%d",&n);
int arr[n];
int *ap;
ap= arr;
printf ("enter elements of array\n");
for (int i=0;i<n;i++){
    scanf ("%d",&arr[i]);
}
int temp;
 for (int i=0;i<n;i++){
     for  (int j=i+1;j<n;j++){
         if (*(ap+i)>*(ap+j)){
         temp =*(ap+i);
         *(ap+i)=*(ap+j);
         *(ap+j)=temp;
         
     }
 }
} 
printf ("elements in ascending order is \n");
for (int i=0;i<n;i++){
    printf ("% 5d",*ap);
    ap++;
}
int inval,p;
printf ("\n write the value which is inserted\n");
scanf ("%d",&inval);
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
    *(ap+i)=*(ap+i-1);
}
*(ap+p)=inval;
printf ("value is inserted\n");
for (int i=0;i<n;i++){
    printf ("%d",*(ap+i));
     
     
    
}

    return 0;
}



￼Enter
