#include<stdio.h>
int main()
{
    int n,i,a[1000],b[1000],c[1000],d[1000],ta=0,tb=0,tc=0,td=0,tv=0;
    float pa,pb,pc,pd;
    printf("Enter the  values:");
    scanf("%d",&n);
    printf("enter array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    printf("|________________________________________________|\n");
    printf("|                 | | candidate | candidate | candidate | candidate|\n");
    printf("|________________________________________________|\n");
    printf("| precinct  | |         A        |         B        |         C        |          D       |\n");
    printf("|       1        | |       %d       |        %d      |        %d      |       %d       |\n",a[0],b[0],c[0],d[0]);
    printf("|       2        | |       %d       |        %d      |        %d      |       %d       |\n",a[1],b[1],c[1],d[1]);
    printf("|       3        | |       %d       |        %d      |        %d      |       %d       |\n",a[2],b[2],c[2],d[2]);
    printf("|       4        | |       %d       |        %d      |        %d      |       %d       |\n",a[3],b[3],c[3],d[3]);
    printf("|    5           | |       %d       |        %d      |        %d      |       %d       |\n",a[4],b[4],c[4],d[4]);
    printf("|________________________________________________|\n");
    for(i=0;i<n;i++)
    {
        tv=tv+a[i]+b[i]+c[i]+d[i];
    }
    for(i=0;i<n;i++)
    {
        ta=ta+a[i];
    }
    for(i=0;i<n;i++)
    {
        tb=tb+b[i];
    }
    for(i=0;i<n;i++)
    {
        tc=tc+c[i];
    }
    for(i=0;i<n;i++)
    {
        td=td+d[i];
    }
    printf("total number of votes = %d\n",tv);
    pa=(ta*100)/tv;
    printf("A got votes = %d\n",ta);
    printf("A percentage of votes = %.2f\n",pa);
    pb=(tb*100)/tv;
    printf("B got votes = %d\n",tb);
    printf("B percentage of votes = %.2f\n",pb);
    pc=(tc*100)/tv;
    printf("c got votes = %d\n",tc);
    printf("c percentage of votes = %.2f\n",pc);
    pd=(td*100)/tv;
    printf("D got votes = %d\n",td);
    printf("D percentage of votes = %.2f\n",pd);
    if(pa>50)
    {
        printf("A is winner\n");
    }
    if(pb>50)
    {
        printf("B is winner\n");
    }
    if(pc>50)
    {
        printf("C is winner\n");
    }
    if(pd>50)
    {
        printf("D id winner\n");
    }
    else if(pa<50&&pb<50&&pc<50&&pd<50)
    {
        if(pa>pb&&pa>pc&&pa>pd)
        {
            if(pb>pc&&pb>pd)
            {
                printf("A and B are runners\n");
            }
            else if(pc>pb&&pc>pd)
            {
                printf("A and C are runners\n");
            }
            else if(pd>pb&&pb>pc)
            {
                printf("A and D are runners\n");
            }
        }
        else if(pb>pa&&pb>pc&&pb>pd)
        {
            if(pa>pc&&pa>pd)
            {
                printf("A and B are runners\n");
            }
            else if(pc>pa&&pc>pd)
            {
                printf("B and C are runners\n");
            }
            else if(pd>pa&&pd>pc)
            {
                printf("B and D are runners\n");
            }
        }
        else if(pc>pa&&pc>pb&&pc>pd)
        {
            if(pa>pb&&pa>pd)
            {
                printf("A and C are runners\n");
            }
            else if(pb>pa&&pb>pd)
            {
                printf("B and C are runners\n");
            }
            else if(pd>pa&&pd>pb)
            {
                printf("C and D are runners\n");
            }
        }
        else
        {
            if(pa>pb&&pa>pc)
            {
                printf("A and D are runners\n");
            }
            if(pb>pa&&pb>pc)
            {
                printf("B and D are runners\n");
            }
            if(pc>pa&&pc>pb)
            {
                printf("C and D are runners\n");
            }
        }
    }
}
