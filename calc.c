#include <stdio.h>

int main(void)
{
    int type, a, b, s;
    printf("Triangle:1, Rectangle:2");
    scanf("%d",&type, &a, &b );    
    printf("Height, Base");    
    scanf("%d%d%d",&type, &a, &b );
    if type = 1
    {
    s = a* b / 2;        
    printf("Triangle's Area : %d\n", s);
    }
    if type = 2
    {
    s = a* b;
    printf("Rectangle's Area : %d\n", s);
    }    
    return 0;
}