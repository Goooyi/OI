#include<cstdio>
using namespace std;
int main(){
    int s,v;
    double t;
    int schooltime = (24+7) * 60 + 50;
    scanf("%d%d",&s,&v);
    printf("%d,%d\n",s,v);
    t = 1.0 * s / v;
    printf("%f\n",t);
    int res = schooltime - int(t+1);
    printf("%02d:%02d",(res / 60) % 24, res % 60);

    return 0;
}