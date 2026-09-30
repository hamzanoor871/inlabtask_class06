#include <stdio.h>
int main()
{
    int age, Category, prize, day;
    float Dprize;
    do
    {
        printf("Enter Age : ");
        scanf("%d", &age);
        if (age == 0)
        {
            break;
        }
        printf("Enter Category \n(1): Regular Movie \n(2): 3D Movie \n(3): Premier \n ");
        scanf("%d", &Category);
        switch (Category)
        {
        case 1:
            prize = 500;
            if (age < 13)
            {
                Dprize = prize - (prize * 0.3);
            }
            else if (age > 60)
            {
                Dprize = prize - (prize * 0.2);
            }
            else
            {
                Dprize = prize;
            }
            printf("Enter Day b\w (1 to 31) : \n");
            scanf("%d", &day);
            if (day % 5 == 0)
            {
                printf("\nA bonus Day");
                Dprize -= 50;
                if (Dprize < 100)
                {
                    Dprize = 100;
                }
            }
            break;
        case 2:
            prize = 800;
            if (age < 13)
            {
                Dprize = prize - (prize * 0.3);
            }
            else if (age > 60)
            {
                Dprize = prize - (prize * 0.2);
            }
            else
            {
                Dprize = prize;
            }
            printf("Enter Day b\w (1 to 31) : \n");
            scanf("%d", &day);
            if (day % 5 == 0)
            {
                printf("\nA bonus Day");
                Dprize -= 50;
                if (Dprize < 100)
                {
                    Dprize = 100;
                }
            }
            break;
        case 3:
            prize = 500;
            if (age < 13)
            {
                Dprize = prize - (prize * 0.3);
            }
            else if (age > 60)
            {
                Dprize = prize - (prize * 0.2);
            }
            else
            {
                Dprize = prize;
            }
            printf("Enter Day b\w (1 to 31) : \n");
            scanf("%d", &day);
            if (day % 5 == 0)
            {
                printf("\nA bonus Day");
                Dprize -= 50;
                if (Dprize < 100)
                {
                    Dprize = 100;
                }
            }
            break;
        default:
            printf("Wrong Category");
        }
        printf("\n---------------Reciept---------------\n");
        printf("The orignal Prize is %d\n", prize);
        printf("The Discounted Prize is %.2f", Dprize);

    } while (age);
}
