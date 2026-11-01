#include <stdio.h>

int main()
{
    int n1,n2,res=10;
    printf("Total chocolate=10\n\n");
     
    while(res>0)
    {
        printf("Player 1 turn-->\n\n");
        printf("Pick chocolate (1-3):\n\n");
        scanf("%d",&n1);
        if(n1<1 || n1>3 || n1>res)
        {
            printf("Enter valid number\n\n");
            continue;
        }
        res=res-n1;
        
        if(res==0)
        {
            printf("Only RAGDA remains\n Player 2 gets RAGDA\n Player 2 LOST\n\n Player 1 WON\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",res);

        label:

        printf("Player 2 turn-->\n\n");
        printf("Pick chocolate (1-3):\n\n");
        scanf("%d",&n2);
            if(n2<1 || n2>3 || n2>res)
               {
                   printf("Enter valid number\n");
                   goto label;
                }
        res=res-n2;
        
        if(res==0)
        {
            printf("Only RAGDA remains\nPlayer 1 gets RAGDA\nplayer 1 LOST\n\nPlayer 2 WON\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",res);
    

    }

    return 0;

}