 #include<stdio.h>
 int main()
 {
     int n1,j;
     scanf("%d",&n1);
     for(j=0;j<n1;j++){
     char a[1000];
     int n,i,c1=0,c2=0,c3=0,k=0;
     scanf("%d",&n);
    scanf("%s",a);
     for(i=0;i<n;i++)
     {
         if(a[i]=='H')
         c1++;
         if(a[i]=='T')
         {
         c2++;
         if(c1==c2)
         {
             c1=0;
             c2=0;
         }
         else{
             printf("Invalid\n");
             k=-1;
             break;
            }
         }
     }
     if(c1==0&&c2==0)
     printf("Valid\n");
     else if(k==0)
     printf("Invalid\n");
     }
}
