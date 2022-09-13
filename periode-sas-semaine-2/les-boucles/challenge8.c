#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=-15,b=-10,m,n;

    while (b-a > 0.00001){
        m = (a+b)/2;
        float fa = a*a*a+12*a*a+1;
        float fb = b*b*b+12*b*b+1;
        float fm = m*m*m+12*m*m+1;

        if ( fa*fm <=0 ){
            b = m;
        }else {
            a = m;
        }
    }
    printf("la solusion est %0.5f",m);



    return 0;
}
