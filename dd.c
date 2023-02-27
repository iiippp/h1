#include<stdio.h>
// Un programme récursif qui calcule la puissance d’un réel X par un entier n positif
int puissance(int x,int n){
    if (n==0)
    {
        return (1);
    }else
    return x*puissance(x,n-1);
}
int main()
{
    int x;
    int n;
    
    printf("Give me the value of x and n :");
    scanf("%d %d",&x,&n);
    printf("the value of the holl number is :%d",puissance(x,n));
    return 0;
}
