#include<stdio.h>
int main()
{
    char ch;
    int Total=0,Pizza=0,Chips=0,Cake=0,Coffee=0;
    printf("------------------WELCOME 2 THRIFTY----------------\n\n");
    printf("*** Menu ***\n\n");
    printf("1.Pizza= 250\n 2.Chips= 200\n 3.Cake= 100\n 4.Coffee= 40\n");

    int option=1;
    while(option)
    {
        printf("Enter your choice :");
        scanf(" %c",&ch);

        switch(ch)
        {
            case '1':
            printf("You ordered Pizza\n");
            Pizza++;
            break;

            case '2':
            printf("You ordered Chips\n");
            Chips++;
            break;

            case '3':
            printf("You ordered Cake\n");
            Cake++;
            break;

            case '4':
            printf("You ordered Coffe\n");
            Coffee++;
            break;

            default:
            printf("Not included\n");
        }
        printf("do you want to select Again press '7' or No press '0' : ");
        scanf("%d",&option);
    }

    printf("\n");
    if(Pizza)
    printf("Pizza       ----> %d*250 = %d\n",Pizza,Pizza*250);
    if(Chips)
    printf("Chips       ----> %d*200 = %d\n",Chips,Chips*350);
    if(Cake)
    printf("Cake       ----> %d*100 = %d\n",Cake,Cake*100);
    if(Coffee)
    printf("Coffee      ----> %d*40  = %d\n",Coffee,Coffee*40);

    Total = Pizza*250 + Chips*200 + Cake*100 + Coffee*40;

    int GST = Total*0.15;
    int q=Pizza + Chips + Cake + Coffee;

    printf("\n------------------WELCOME 2 THRIFTY----------------\n");
    printf("*****************************************************\n");
    printf("Total       ----> %d items= %d\n",q,Total);
    printf("GST         ---->         = %d\n",GST);
    printf("-----------------------------------------------------\n");
    printf("Grand Total ---->         = %d\n",Total+GST);
    printf("\n****THANK YOU & HAVE A NICE DAY****\n");

    return 0;
}