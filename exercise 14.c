#define number_1 50
#define number_2 50
int main(int argc, char const *argv[])
{
    int a[number_1],x[number_1][number_2],b=0,min,row = 0,arrange = 0,temp;
    for (int i = 0; i < number_1; ++i)
    {
        scanf("%d",&a[i]);
        if (a[i]==0)
            break;
        for (int j = 0; j < a[i]; ++j)
            scanf("%d",&x[i][j]);
        b++;
    }
    for (int i = 0; i < b; ++i)
    {
        min=x[i][0];
        for (int j = 1; j < a[i]; ++j)
            if (x[i][j]<min)
            {
                min=x[i][j];
                row=i;
                arrange=j;
            }
        temp=x[i][0];
        x[i][0]=x[row][arrange];
        x[row][arrange]=temp;
    }
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < a[i]; ++j)
            printf("%2d", x[i][j]);
        printf("\n");
    }
    return 0;
}
