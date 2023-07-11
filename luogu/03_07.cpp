#include<cstdio>
using namespace std;
int main(){
    double m,h,res;
    scanf("%lf%lf", &m,&h);
    res = m / (h * h);
    if(res < 18.5)
        printf("Underweight");
    else if(res < 24)
        printf("Normal");
    else
        printf("%lf\nOverweight",res);
    return 0;
}