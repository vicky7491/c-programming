#include<Stdio.h>
int  main()
{
    // int rating;
    // printf("Enter your rating (1-5)\n");
    // scanf("%d", &rating);
    // switch(rating){
    //     case 1:
    //         printf("our rating is 1\n");
    //         break;
    //      case 2:
    //         printf("Your rating is 2\n");
    //         break;
    //      case 3:
    //         printf("Your rating is 3\n");
    //         break;
    //      case 4:
    //         printf("Your rating is 4\n");
    //         break;
    //      case 5:
    //         printf("Your rating is 5\n"); 
    //         break;
    //      default:
    //         printf("invalid rating!\n");
    //         break;


        int day;
    printf("Enter day (1-7):\n");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("monday\n");
            break;
         case 2:
            printf("tuesday\n");
            break;
         case 3:
            printf("wednesday\n");
            break;
         case 4:
            printf("thursday\n");
            break;
         case 5:
            printf("friday\n"); 
            break;
         case 6:
            printf("saturday\n"); 
            break;
         default:
            printf("not a valid day\n");
            break;

    }

        return 0;
}