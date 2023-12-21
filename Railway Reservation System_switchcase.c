#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int class1,num,i,j,k,l,m,p,book,nums;
    char name[50];
    char dateofjourney[20];
    int arr1[6]= {10,12,13,69,15,16};
    int arr2[6]= {10,12,13,14,15,16};
    int arr3[6]= {11,12,13,14,15,16};
    int arr4[6]= {19,12,13,14,15,16};
    int arr5[6]= {25,12,13,14,15,16};
    int arr6[6]= {31,12,13,14,15,16};
    int b;
    int a;
    int t=0;
    int input;
    char ch;
    printf("\n\t\t\t————Welcome to the Amrita Railway station————\n");
    printf("Enter the name of passenger \n");
    scanf("%s",&name);
    printf("Enter your date of journey \n");
    scanf("%s",&dateofjourney);
    printf("Select your place of departure and arrival \n");
    printf("1.Rajahmundry to Tirupati \n");
    printf("2.Rajahmundry to Hyderabad  \n");
    printf("3.Hyderabad to Tirupati  \n");
    printf("4.Tirupati to Rajahmundry  \n");
    printf("5.Hyderabad to Rajahmundry  \n");
    printf("6.Tirupati to Hyderabad  \n");
    scanf("%d",&book);
    switch(book)
    {
    case 1:
    {
        printf("Your destinationis to tirupati \n");
        printf("the list of avaliable seats are:\n");
        for(i=0; i<6; i++)
        {
            printf("%d ",arr1[i]);
        }

        printf("\nEnter the seat number u want to book \n");
        scanf("%d",&num);
        for(i=0; i<10; i++)
        {
            if(arr1[i]==num)
            {
                t=1;
                printf("Your seat booking is completed successfully \n");
                printf("Name of passenger : %s \n",name);
                printf("date of journey:%s \n",dateofjourney);
                printf("Your Seat Number:- %d \n",num);
                printf("\n\n\t\t\t Thank You \n");
                break;
            }
            if(t==0 && i==9)
            {
                printf("The seat number you entered is already booked...pls book some other seat \n");
                printf("\n\n\t\t\t Thank You ");
                break;
            }

        }
        break;

    }
    case 2:
    {
        printf("Your destinationis to Hyderabad \n");
        printf("the list of avaliable seats are:\n");
        for(j=0; j<6; j++)
        {
            printf("%d ",arr2[j]);
        }
        printf("\nEnter the seat number u want to book \n");
        scanf("%d",&nums);
        for(j=0; j<10; j++)
        {
            if(arr2[j]==nums)
            {
                t=1;
                printf("Your seat booking is completed successfully \n");
                printf("Name of passenger : %s \n",name);
                printf("date of journey:%s \n",dateofjourney);
                printf("Your Seat Number:- %d \n",nums);
                printf("\n\n\t\t\t Thank You ");
                break;
            }
            if(t==0 && i==9)
            {
                printf("The seat number you entered is already booked...pls book some other seats \n");
                printf("\n\n\t\t\t Thank You ");
                break;
            }

        }
        break;
    }
    case 3:
    {
        printf("Your destination is to tirupati \n");
        printf("the list of avaliable seats are:\n");
        for(i=0; i<6; i++)
        {
            printf("%d ",arr3[i]);
        }
        printf("\nEnter the seat number u want to book \n");
        scanf("%d",&num);
        for(i=0; i<6; i++)
        {
            if(arr3[i]==num)
            {
                t=1;
                printf("Your seat booking is completed successfully\n");
                printf("Name of passenger : %s \n",name);
                printf("date of journey:%s \n",dateofjourney);
                printf("Your Seat Number:- %d \n",num);
                printf("\n\n\t\t\t Thank You ");
                break;
            }
            if(t==0 && i==9)
            {
                printf("The seat number you entered is already booked...pls book some other seat \n");
                printf("\n\n\t\t\t Thank You ");
                break;

            }
        }
        break;
    }
    case 4:
    {
        printf("Your destinationis to Rajahmundry \n");
        printf("the list of avaliable seats are:\n");
        for(i=0; i<6; i++)
        {
            printf("%d ",arr4[i]);
        }
        printf("\nEnter the seat number u want to book \n");
        scanf("%d",&num);
        for(i=0; i<10; i++)
        {
            if(arr4[i]==num)
            {
                t=1;
                printf("Your seat booking is completed successfully\n");
                printf("Name of passenger : %s \n",name);
                printf("date of journey:%s \n",dateofjourney);
                printf("Your Seat Number:- %d \n",num);
                case 5:
                {
                    printf("Your destinationis to Rajahmundry \n");
                    printf("the list of avaliable seats are:\n");
                    for(i=0; i<6; i++)
                    {
                        printf("%d ",arr5[i]);
                    }
                    printf("\nEnter the seat number u want to book \n");
                    scanf("%d",&num);
                    for(i=0; i<10; i++)
                    {
                        if(arr5[i]==num)
                        {
                            t=1;
                            printf("Your seat booking is completed successfully\n");
                            printf("Name of passenger : %s \n",name);
                            printf("date of journey:%s \n",dateofjourney);
                            printf("Your Seat Number:- %d \n",num);
                            printf("\n\n\t\t\t Thank You ");
                            break;
                        }
                        if(t==0 && i==9)
                        {
                            printf("The seat number you entered is already booked...pls book some other seat \n");
                            printf("\n\n\t\t\t Thank You ");
                            break;
                        }

                    }
                    break;
                }
                case 6:
                {
                    printf("Your destinationis to Hyderabad \n");
                    printf("the list of avaliable seats are:\n");
                    for(i=0; i<6; i++)
                    {
                        printf("%d ",arr6[i]);
                    }
                    printf("\nEnter the seat number u want to book \n");
                    scanf("%d",&num);
                    for(i=0; i<10; i++)
                    {
                        if(arr6[i]==num)
                        {
                            t=1;
                            printf("Your seat booking is completed successfully\n");
                            printf("Name of passenger : %s \n",name);
                            for(i=0; i<6; i++)
                            {
                                printf("%d ",arr6[i]);
                            }
                            printf("\nEnter the seat number u want to book \n");
                            scanf("%d",&num);
                            for(i=0; i<10; i++)
                            {
                                if(arr6[i]==num)
                                {
                                    t=1;
                                    printf("Your seat booking is completed successfully\n");
                                    printf("Name of passenger : %s \n",name);
                                }

                                break;
                            }
                            default:
                            {
                                printf("\n Sorry There is an Error ! Please choose given Option \n\n\t\t\t Thank You ");
                            }

                            return 0;
                        }
                    }
                }
            }
        }
    }
}
}