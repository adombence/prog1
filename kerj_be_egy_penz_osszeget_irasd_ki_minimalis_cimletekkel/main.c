#include <stdio.h>
#include <stdlib.h>

int main()
{
    int penz;
    printf("kerem az osszeget: ");
    scanf("%d",&penz);
    int otezer=penz/5000;
    printf("\t5000: \t%d\n",otezer);
    penz=penz%5000;
    int ketezer=penz/2000;
    printf("\t2000: \t%d\n",ketezer);
    penz=penz%2000;
    int otszaz=penz/500;
    printf("\t500: \t%d\n",otszaz);
    penz=penz%500;
    int otven=penz/50;
    printf("\t50: \t%d\n",otven);
    penz=penz%50;
    int ot=penz/5;
    printf("\t5: \t%d\n",ot);
    return 0;
}
