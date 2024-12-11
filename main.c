#include<stdio.h>
int saisir();
void remplir(int n,int t[n]);
void fusioner(int n,int n2,int t1[n],int t2[n2],int t[n+n2]);
void afficher(int n,int n2,int t[n+n2]);
int main(){
    int n,n2;
    int t1[100];
    int t2[100];
    int t[100];
    printf("tableau 1 \n");
    n=saisir();
    remplir(n,t1);
    printf("tableau 2 \n");
    n2=saisir();
    remplir(n2,t2);
    fusioner(n,n2,t1,t2,t);
    printf("tableau finale \n");
    afficher(n,n2,t);
}

int saisir(){
    int n;
    do {
        printf("donner la taille dun tableaux");
        scanf("%d",&n);
    }while(n<=0||n>100);
    return n;
}
void remplir(int n,int t[n]){
    
    for(int i=0;i<n;i++){
        do{
            printf("donner l'element n°%d =",i+1);
            scanf("%d",&t[i]);
        }while(t[i]<10||t[i]>99);
    }
}
void fusioner(int n,int n2,int t1[n],int t2[n2],int t[n+n2]){
    int s=0;
    while (s<(n+n2)-2){
        for(int i=0;i<n;i++){
            t[s]=t1[i];
            s=s+1   ;
        }
        for(int j=0;j<n2;j++){
            t[s]=t2[j];
            s=s+1;
        }
    }
}
void afficher(int n,int n2,int t[n+n2]){
    for (int i=0;i<n+n2;i++){
        printf("%d |",t[i]);
    }
}