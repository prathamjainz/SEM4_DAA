#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long fact(int num){
    if(num == 0){
        return num;
    }
    else{
        return num*fact(num-1);
    }
}
void main(){
    printf("Function 1: n cube\n");
    for(double i=0;i<=100;i++){
        printf("%.0lf\n",pow(i,3));
        
    }
    printf("Function 2: 2 raised to root 2 log n\n");
    for(double i = 0;i<=100;i++){
        printf("%.3lf\n", pow(2, sqrt(2*log2(i))));
    }
    printf("Function 3: (3/2) raised to n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",pow((3.0/2.0),i));
    }
    printf("Function 4: n log n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",i * log2(i));
    }
    printf("Function 5: ln n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",log(i));
    }
    printf("Function 6: 2 raised to 2 raised to n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",pow(2,pow(2,i)));
    }
    printf("Function 7: n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",i);
    }
    printf("Function 8: 2 raised to 2 raised to n+1\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",pow(2,pow(2,i+1)));
    }
    printf("Function 9: e raised to n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",exp(i));
    }
    printf("Function 10: 2 raised to log n\n");
    for(double i = 0;i<=100;i++) {
        printf("%.3lf\n",pow(2,log2(i)));
    }

}