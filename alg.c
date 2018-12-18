#include<stdio.h>

int main()
{

        int a[100];
       int n,i,j;


        printf("Enter number of element = ");
        scanf("%d",&n);
        printf("\n\nenter elements = ");
        for ( i = 0; i < n; i++) {

           scanf("%d",&a[i]);

        }

        int max=a[0];
        printf("\n\nlargest number is = ");
        for ( i = 0; i < n; i++) {
            if(a[i]>max)
            {
               max=a[i];
            }
        }
        printf("%d",max);

       int min=a[0];
        printf("\n\nsmallest number is =");

        for ( i = 0; i < n; i++) {

            if(a[i]<min)
            {
                min=a[i];
            }

        }
        printf("%d",min);

        int avg,sum=0;
        printf("\n\naverage is = ");

        for ( i = 0; i < n ; i++) {

            sum=sum+a[i];
        }
        avg=sum/n;
        printf("%d",avg);


        printf("\n\nAscending short is =");
        int temp;

        for ( i = 0; i < n; i++) {
            for ( j = 0; j < n; j++) {

                if(a[j]>a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }

        }
        for ( i = 0; i < n; i++) {


         printf("%d ",a[i]);
        }
        printf("\n");


        printf("\n\nDescending short is = ");
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < n; j++) {

                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }

        }
        for ( i = 0; i < n; i++) {


         printf("%d ",a[i]);
        }
        printf("\n");

    }



