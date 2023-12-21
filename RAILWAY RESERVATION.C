#include <stdio.h>
#include<string.h>
int main()
{
    char Destination[20],Departure[20];
    int A[100],i=0,t=0,num,j;
    char Name[30];
    char Dateofjourney[20];
    printf("\n\t\t\t --------Welcome to the Amrita Railway Reservation System----------\n");
    printf("Enter the name of passenger \n");
    scanf("%s",&Name);
    printf("Enter your date of journey \n");
 scanf("%s",&Dateofjourney);
    printf("Enter your place of departure and arrival \n");
    printf("--------------------------------------------\n");
    printf("Type Your Destination: ");
    scanf("%s",&Destination);
    printf("Type Your Departure: ");
    scanf("%s",&Departure);
    printf("Your destination is to %s \n",Destination);
    printf("The list of avaliable seats are:\n");
    int L=strlen(Destination);
    while(i<10)
    {
if(i==0)
    { A[0]=L; }
    else{
    A[i]=A[i-1]+i;
    }
    i++;
    }
    for(j=0;j<10;j++)
    {
    printf("%d \t",A[j]);
    }
    printf("\nEnter the Seat Number: ");
    scanf("%d",&num);
    for(i=0;i<10;i++){
    if(A[i]==num)
    {
t=1;
    printf("--------------------------------------------\n");
    printf("Your seat booking is completed successfully \n");
    printf("Name of passenger : %s \n",Name);
    printf("date of journey:%s \n",Dateofjourney);
    printf("Your Seat Number:- %d \n",num);
    printf("\n\n\t\t\t Thank You ");
    }
    if(t==0 && i==9)
    {
    printf("--------------------------------------------\n");
    printf("The seat number you entered is already booked...pls book some other seat \n");
    printf("\n\n\t\t\t Thank You ");
 }
    }
}

