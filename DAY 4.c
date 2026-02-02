     \\pointers//

   #include <stdio.h>
int main() {
    int mynum = 8;
    printf("%d \n", mynum);
    printf("%p", mynum);
    return 0;
}
     \\using pointer//

#include <stdio.h>

int main() {
    int mynum = 10;
    int *point = &mynum;
    //output of mynum
    printf("%d \n", mynum);
    //output of memory of mynum
    printf("%p \n", &mynum);
    //output of memory of point
    printf("%p \n", point);
     //output of value in point
    printf("%d",*point);
    return 0;
}
 output
10 
0x7fff459f8e84 
0x7fff459f8e84
10

 \\principal amount//
  
#include <stdio.h>
#include <math.h>
int main() {
    float pa,fa,rp;
    int years;
    printf("Enter the principal amount : \n");
    scanf("%f",&pa);
    printf("Enter the rate power : \n");
    scanf("%f",&rp);
    printf("Enter the year : \n");
    scanf("%d",&years);
    fa =pa*pow((1+rp/100),years);
    printf("The final amount is %2.f",fa);

    return 0;
}
   \\swapping of number value//
#include<stdio.h>
int main(){
    int x,y, temp;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    printf("Enter the value of y: \n");
    scanf("%d",&y);
    temp = x;
    x=y;
    y= temp;
    printf("x=%d \n",x);
    printf("y = %d \n",y);

   //sum of array//

 #include <stdio.h>
#include<stdlib.h>
int main() {
    int n,i;
    int *array;
    int sum =0;
    //get length
    printf("Enter the number of elements:");
    scanf("%d",&n);
    //memory allocation
    array=(int*)malloc(n*sizeof(int));
    //validation
    if(array ==NULL){
        printf("Memory not allocated \n");
        return 0;
    }
        else{
            printf("Memory allocated and the allocated memory is %d \n",n);
        }
        printf("Enter %d numbers by adding a gap for each numbers \n", n);
        for(i=0;i<n;i++){
            scanf("%d", &array[i]);
            sum +=array[i];
        }
        printf("The sum of all the elements is :%d\n",sum);
        //destroy memory
        free(array);
        printf("Memory deleted successfully");
    

    return 0;
}
    